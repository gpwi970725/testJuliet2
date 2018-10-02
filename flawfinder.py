import os                       # for directory path
import datetime                 # date와 time을 얻기 위해 사용
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



# nowDate에 datetime정보 저장
now = datetime.datetime.now()
nowDate = now.strftime('%Y%m%d-%H%M')

# fileName에 파일명 저장
fileName = 'flawfinder.html'

# filePath에 html파일이 있는 경로 저장
currentDir = os.getcwd()
filePath = currentDir + '/' + fileName

source = ''
tagName = ['li', 'i']
tag = []
tagText = []

source = sourceRead(filePath)
tag = findTag(tagName, source)
tagText = flawfinderParsing(tag)

flawfinder = Element
flawfinder = to_tag(tagText, nowDate, 'flawfinder')
ElementTree(flawfinder).write(currentDir + '/flawfinder-' + nowDate + '.xml')
