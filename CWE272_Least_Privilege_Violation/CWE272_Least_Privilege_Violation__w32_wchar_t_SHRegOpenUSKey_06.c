/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE272_Least_Privilege_Violation__w32_wchar_t_SHRegOpenUSKey_06.c
Label Definition File: CWE272_Least_Privilege_Violation__w32.label.xml
Template File: point-flaw-06.tmpl.c
*/
/*
 * @description
 * CWE: 272 Least Privilege Violation
 * Sinks: SHRegOpenUSKey
 *    GoodSink: Open a registry key using SHRegOpenUSKeyW() and HKEY_CURRENT_USER
 *    BadSink : Open a registry key using SHRegOpenUSKeyW() and HKEY_LOCAL_MACHINE
 * Flow Variant: 06 Control flow: if(STATIC_CONST_FIVE==5) and if(STATIC_CONST_FIVE!=5)
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#include <shlwapi.h>
#pragma comment( lib, "shlwapi" )

/* The variable below is declared "const", so a tool should be able
   to identify that reads of this will always give its initialized
   value. */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITBAD

void CWE272_Least_Privilege_Violation__w32_wchar_t_SHRegOpenUSKey_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HUSKEY hKey;
            /* FLAW: Call SHRegOpenUSKeyW() with HKEY_LOCAL_MACHINE (fIgnoreHKCU == TRUE) violating the least privilege principal */
            if (SHRegOpenUSKeyW(
                        keyName,
                        KEY_WRITE,
                        NULL,
                        &hKey,
                        TRUE) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be opened");
            }
            else
            {
                printLine("Registry key opened successfully");
                SHRegCloseUSKey(hKey);
            }
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(STATIC_CONST_FIVE!=5) instead of if(STATIC_CONST_FIVE==5) */
static void good1()
{
    if(STATIC_CONST_FIVE!=5)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HUSKEY hKey;
            /* FIX: Call SHRegOpenUSKeyW() with HKEY_CURRENT_USER (fIgnoreHKCU == FALSE) */
            if (SHRegOpenUSKeyW(
                        keyName,
                        KEY_WRITE,
                        NULL,
                        &hKey,
                        FALSE) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be opened");
            }
            else
            {
                printLine("Registry key opened successfully");
                SHRegCloseUSKey(hKey);
            }
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HUSKEY hKey;
            /* FIX: Call SHRegOpenUSKeyW() with HKEY_CURRENT_USER (fIgnoreHKCU == FALSE) */
            if (SHRegOpenUSKeyW(
                        keyName,
                        KEY_WRITE,
                        NULL,
                        &hKey,
                        FALSE) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be opened");
            }
            else
            {
                printLine("Registry key opened successfully");
                SHRegCloseUSKey(hKey);
            }
        }
    }
}

void CWE272_Least_Privilege_Violation__w32_wchar_t_SHRegOpenUSKey_06_good()
{
    good1();
    good2();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE272_Least_Privilege_Violation__w32_wchar_t_SHRegOpenUSKey_06_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE272_Least_Privilege_Violation__w32_wchar_t_SHRegOpenUSKey_06_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
