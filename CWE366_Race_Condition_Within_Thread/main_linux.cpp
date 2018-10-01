/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_14_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_14_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_08_good();");
	CWE366_Race_Condition_Within_Thread__global_int_08_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_02_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_02_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_03_good();");
	CWE366_Race_Condition_Within_Thread__global_int_03_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_04_good();");
	CWE366_Race_Condition_Within_Thread__global_int_04_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_10_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_10_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_16_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_16_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_07_good();");
	CWE366_Race_Condition_Within_Thread__global_int_07_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_01_good();");
	CWE366_Race_Condition_Within_Thread__global_int_01_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_03_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_03_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_13_good();");
	CWE366_Race_Condition_Within_Thread__global_int_13_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_11_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_11_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_10_good();");
	CWE366_Race_Condition_Within_Thread__global_int_10_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_06_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_06_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_09_good();");
	CWE366_Race_Condition_Within_Thread__global_int_09_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_01_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_01_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_17_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_17_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_13_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_13_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_06_good();");
	CWE366_Race_Condition_Within_Thread__global_int_06_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_12_good();");
	CWE366_Race_Condition_Within_Thread__global_int_12_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_08_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_08_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_12_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_12_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_18_good();");
	CWE366_Race_Condition_Within_Thread__global_int_18_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_15_good();");
	CWE366_Race_Condition_Within_Thread__global_int_15_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_17_good();");
	CWE366_Race_Condition_Within_Thread__global_int_17_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_07_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_07_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_02_good();");
	CWE366_Race_Condition_Within_Thread__global_int_02_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_05_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_05_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_11_good();");
	CWE366_Race_Condition_Within_Thread__global_int_11_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_14_good();");
	CWE366_Race_Condition_Within_Thread__global_int_14_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_05_good();");
	CWE366_Race_Condition_Within_Thread__global_int_05_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_04_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_04_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_15_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_15_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_09_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_09_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_16_good();");
	CWE366_Race_Condition_Within_Thread__global_int_16_good();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_18_good();");
	CWE366_Race_Condition_Within_Thread__int_byref_18_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_14_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_14_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_08_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_08_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_02_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_02_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_03_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_03_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_04_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_04_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_10_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_10_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_16_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_16_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_07_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_07_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_01_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_01_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_03_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_03_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_13_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_13_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_11_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_11_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_10_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_10_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_06_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_06_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_09_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_09_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_01_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_01_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_17_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_17_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_13_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_13_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_06_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_06_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_12_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_12_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_08_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_08_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_12_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_12_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_18_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_18_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_15_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_15_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_17_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_17_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_07_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_07_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_02_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_02_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_05_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_05_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_11_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_11_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_14_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_14_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_05_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_05_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_04_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_04_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_15_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_15_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_09_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_09_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_16_bad();");
	CWE366_Race_Condition_Within_Thread__global_int_16_bad();

	printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_18_bad();");
	CWE366_Race_Condition_Within_Thread__int_byref_18_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
