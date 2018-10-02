import os                       # for directory path
import glob                     # 디렉토리 내 파일을 얻기 위해 사용
import datetime                 # date와 time을 얻기 위해 사용
import copy
from lxml.html import parse     # html양식으로 파싱
from io import StringIO         # 문자열 입출력 모듈
from xml.etree.ElementTree import Element, SubElement, dump, ElementTree

def indent(elem, level=0):
    i = "\n" + level*"  "
    if len(elem):
        if not elem.text or not elem.text.strip():
            elem.text = i + "  "
        if not elem.tail or not elem.tail.strip():
            elem.tail = i
        for elem in elem:
            indent(elem, level+1)
        if not elem.tail or not elem.tail.strip():
            elem.tail = i
    else:
        if level and (not elem.tail or not elem.tail.strip()):
            elem.tail = i

def sourceRead(filePath):
    source = ''
    # web문서를 source(text문서)로 가져오기
    with open(filePath, mode="r") as f:
        while True:
            line = f.readline()
            if line is '':
                break
            else:
                source = source + line
    return source

def findTag(tagName, source):
    tag = []
    tempTag = []
    # html 문서로 파싱(변환)
    source = StringIO(source)  # 문자열로 읽음
    parsed = parse(source)  # source -> html형식으로 파싱

    # root node 찾기
    doc = parsed.getroot()

    # doc.findall(".//태그")    # 찾고자 하는 태그명
    for i in range(0, len(tagName), 1):
        tempTag = doc.findall('.//' + tagName[i])
        tag.append(tempTag)
    return tag

def clangParsing(tag):
    for i in range(0, len(tag), 1):     # repeat as many as files
        tempNum = 0
        while True:
            if len(tag[i][0]) is 6:
                break
            if tempNum < 6:
                tempNum = tempNum + 1
            else:
                del(tag[i][0][tempNum])

    tempText3 = []
    tagText = []
    for j in range(0, len(tag), 1):     # repeat as many as files
        tempText1 = []
        tempText2 = []

        tempText1 = tag[j][0][1].text    # tempText1 = file name
        tempText2.append(tempText1)

        tempText1 = (tag[j][1][0].text).split(',')
        tempText1 = tempText1[0].replace('line ', '')    # tempText1 = error location
        tempText2.append(tempText1)

        tempText1 = tag[j][0][5].text    # tempText1 = error content
        tempText2.append(tempText1)

        tagText.append(tempText2)

    for k in range(0, len(tagText), 1):
        tagText[k].append('clang_result')
    return tagText

def flawfinderParsing(tag):
    tempText = []
    tagText = []
    for i in range(0, len(tag[0]), 1):
        tempText = (tag[0][i].text).split('./')
        tempText = tempText[1].split(':')
        del tempText[2]
        tagText.append(tempText)
    for j in range(0, len(tag[1]), 1):
        tagText[j].append(tag[1][j].text)
    for k in range(0, len(tagText), 1):
        tagText[k].append('flawfinder_result')
    return tagText

def to_tag(tagText, nowDate, fileName):
    fileNameTag = Element(fileName)
    fileNameTag.attrib["result"] = nowDate
    for tagNum in range(0, len(tagText), 1):
        error = Element("error")
        error.attrib["File"] = tagText[tagNum][0]
        fileNameTag.append(error)
        SubElement(error, "Location").text = "line " + tagText[tagNum][1]
        SubElement(error, "Description").text = tagText[tagNum][2]
    indent(fileNameTag)
    dump(fileNameTag)
    return fileNameTag

def makeTag(tagText, nowDate):
    code_analysis = Element("code_analysis")
    code_analysis.attrib["result"] = nowDate
    for tagNum in range(0, len(tagText), 1):
        error = Element("error")
        error.attrib["File"] = tagText[tagNum][0]
        code_analysis.append(error)
        SubElement(error, "Location").text = "line " + tagText[tagNum][1]
        SubElement(error, tagText[tagNum][3]).text = tagText[tagNum][2]
        if len(tagText[tagNum]) > 4:
            for i in range(4, len(tagText[tagNum]) - 4, 1):
                SubElement(error, tagText[tagNum][3]).text = tagText[tagNum][i]
    indent(code_analysis)
    dump(code_analysis)
    return code_analysis

def bubbleSort(tagText):
    sort_tagText = copy.deepcopy(tagText)
    for i in range(0, len(tagText)-1, 1):
        for j in range(1, len(tagText)-i, 1):
            if int(sort_tagText[j-1][1]) > int(sort_tagText[j][1]):
                sort_tagText[j-1], sort_tagText[j] = sort_tagText[j], sort_tagText[j-1]
    return sort_tagText

def sort_filename(tagText):
    sort_tagText = []
    tempText1 = []
    tempText2 = []
    sort_tagText.append(tagText[0])
    for i in range(1, len(tagText), 1):
        if tagText[0][0] == tagText[i][0]:
            tempText1.append(tagText[i])
        else:
            tempText2.append(tagText[i])
    sort_tagText = sort_tagText + tempText1
    sort_tagText = sort_tagText + tempText2
    return sort_tagText

def sort_errors(tagText1, tagText2):
    sort_tagText = copy.deepcopy(tagText2)
    tof = True
    for i in range(0, len(tagText1), 1):
        for j in range(0, len(tagText2), 1):
            if tagText1[i][0] == tagText2[j][0]:
                if tagText1[i][1] == tagText2[j][0]:
                    sort_tagText[i].append(tagText1[i][2])
                    sort_tagText[i][3] = tagText2[i][3] + tagText1[i][3]
                    tof = True
                else:
                    tof = False
            else:
                tof = False
        if tof is False:
            sort_tagText.append(tagText1[i])
    sort_tagText = bubbleSort(sort_tagText)
    sort_tagText = sort_filename(sort_tagText)
    return sort_tagText




# nowDatatime에 datetime정보 저장
now = datetime.datetime.now()
nowDatetime = now.strftime('%Y%m%d-%H_%M/')
nowDate = now.strftime('%Y%m%d-%H%M')

# clangfolderName에 폴더명 저장
# clang_folderName = 'clangResult-' + nowDatetime
clang_folderName = 'clangResult'
# flawfinderfileName에 파일명 저장
flawfinder_fileName = 'flawfinder.html'

## clang_filePath에 html파일이 있는 경로 저장
currentDir = os.getcwd()
clang_filePath = currentDir + '/' + clang_folderName
os.chdir(clang_filePath) # 디렉토리를 바꿔야 할 경우에만 쓰세요
clang_fileList = []
for clang_file in glob.glob("report-*.html"): # '*'은 모든 값을 의미
    clang_fileList.append(clang_filePath+clang_file)
## flawfinder_filePath에 html파일이 있는 경로 저장
flawfinder_filePath = currentDir + '/' + flawfinder_fileName

clang_tagName = ['td', 'a']
flawfinder_tagName = ['li', 'i']
tempTag = []
clang_tag = []
clang_tagText = []
clang_source = []
flawfinder_tag = []
flawfinder_tagText = []
sort_tagText = []
tempSource = ''
flawfinder_source = ''

for i in range(0, len(clang_fileList), 1):
    tempSource = sourceRead(clang_fileList[i])
    clang_source.append(tempSource)

for j in range(0, len(clang_source), 1):
    tempTag = findTag(clang_tagName, clang_source[j])
    clang_tag.append(tempTag)

clang_tagText = clangParsing(clang_tag)

flawfinder_source = sourceRead(flawfinder_filePath)
flawfinder_tag = findTag(flawfinder_tagName, flawfinder_source)
flawfinder_tagText = flawfinderParsing(flawfinder_tag)

sort_tagText = sort_errors(clang_tagText, flawfinder_tagText)
# print(sort_tagText)

codeAnalysis = Element('codeAnalysis')
codeAnalysis.attrib['result'] = nowDate
code_analysis = Element
code_analysis = makeTag(sort_tagText, nowDate)
codeAnalysis.append(code_analysis)

ElementTree(codeAnalysis).write(currentDir + '/codeAnalysis-' + nowDate + '.xml')