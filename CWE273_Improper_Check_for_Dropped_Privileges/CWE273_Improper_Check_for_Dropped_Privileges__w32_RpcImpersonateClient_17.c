/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE273_Improper_Check_for_Dropped_Privileges__w32_RpcImpersonateClient_17.c
Label Definition File: CWE273_Improper_Check_for_Dropped_Privileges__w32.label.xml
Template File: point-flaw-17.tmpl.c
*/
/*
 * @description
 * CWE: 273 Improper Check for Dropped Privileges
 * Sinks: RpcImpersonateClient
 *    GoodSink: Check the return value of RpcImpersonateClient() and handle it properly
 *    BadSink : Do not check if RpcImpersonateClient() fails
 * Flow Variant: 17 Control flow: for loops
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#include <rpcdce.h>
# pragma comment(lib, "rpcrt4")

#ifndef OMITBAD

void CWE273_Improper_Check_for_Dropped_Privileges__w32_RpcImpersonateClient_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        RpcImpersonateClient(0);
        /* FLAW: Do not check if RpcImpersonateClient() fails */
        /* We'll leave out most of the implementation since it has nothing to do with the CWE
         * and since the checkers are looking for certain function calls anyway */
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses the GoodSinkBody in the for statements */
static void good1()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        /* FIX: Check the return value of RpcImpersonateClient() for RPC_S_OK */
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
        /* We'll leave out most of the implementation since it has nothing to do with the CWE
         * and since the checkers are looking for certain function calls anyway */
    }
}

void CWE273_Improper_Check_for_Dropped_Privileges__w32_RpcImpersonateClient_17_good()
{
    good1();
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
    CWE273_Improper_Check_for_Dropped_Privileges__w32_RpcImpersonateClient_17_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE273_Improper_Check_for_Dropped_Privileges__w32_RpcImpersonateClient_17_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
