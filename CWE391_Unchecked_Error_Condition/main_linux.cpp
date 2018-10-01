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
	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_08_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_08_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_08_good();");
	CWE391_Unchecked_Error_Condition__sqrt_08_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_01_good();");
	CWE391_Unchecked_Error_Condition__sqrt_01_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_02_good();");
	CWE391_Unchecked_Error_Condition__sqrt_02_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_04_good();");
	CWE391_Unchecked_Error_Condition__strtol_04_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_16_good();");
	CWE391_Unchecked_Error_Condition__strtol_16_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_11_good();");
	CWE391_Unchecked_Error_Condition__sqrt_11_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_09_good();");
	CWE391_Unchecked_Error_Condition__sqrt_09_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_10_good();");
	CWE391_Unchecked_Error_Condition__strtol_10_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_15_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_15_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_02_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_02_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_05_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_05_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_02_good();");
	CWE391_Unchecked_Error_Condition__strtol_02_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_17_good();");
	CWE391_Unchecked_Error_Condition__strtol_17_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_18_good();");
	CWE391_Unchecked_Error_Condition__strtol_18_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_12_good();");
	CWE391_Unchecked_Error_Condition__sqrt_12_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_12_good();");
	CWE391_Unchecked_Error_Condition__strtol_12_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_07_good();");
	CWE391_Unchecked_Error_Condition__sqrt_07_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_12_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_12_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_17_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_17_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_05_good();");
	CWE391_Unchecked_Error_Condition__sqrt_05_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_16_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_16_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_08_good();");
	CWE391_Unchecked_Error_Condition__strtol_08_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_14_good();");
	CWE391_Unchecked_Error_Condition__strtol_14_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_09_good();");
	CWE391_Unchecked_Error_Condition__strtol_09_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_17_good();");
	CWE391_Unchecked_Error_Condition__sqrt_17_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_09_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_09_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_15_good();");
	CWE391_Unchecked_Error_Condition__sqrt_15_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_06_good();");
	CWE391_Unchecked_Error_Condition__strtol_06_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_14_good();");
	CWE391_Unchecked_Error_Condition__sqrt_14_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_03_good();");
	CWE391_Unchecked_Error_Condition__strtol_03_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_07_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_07_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_01_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_01_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_06_good();");
	CWE391_Unchecked_Error_Condition__sqrt_06_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_04_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_04_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_13_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_13_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_11_good();");
	CWE391_Unchecked_Error_Condition__strtol_11_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_18_good();");
	CWE391_Unchecked_Error_Condition__sqrt_18_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_01_good();");
	CWE391_Unchecked_Error_Condition__strtol_01_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_10_good();");
	CWE391_Unchecked_Error_Condition__sqrt_10_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_11_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_11_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_13_good();");
	CWE391_Unchecked_Error_Condition__strtol_13_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_10_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_10_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_15_good();");
	CWE391_Unchecked_Error_Condition__strtol_15_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_18_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_18_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_14_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_14_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_04_good();");
	CWE391_Unchecked_Error_Condition__sqrt_04_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_03_good();");
	CWE391_Unchecked_Error_Condition__sqrt_03_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_05_good();");
	CWE391_Unchecked_Error_Condition__strtol_05_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_13_good();");
	CWE391_Unchecked_Error_Condition__sqrt_13_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_03_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_03_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_06_good();");
	CWE391_Unchecked_Error_Condition__wcstombs_06_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_07_good();");
	CWE391_Unchecked_Error_Condition__strtol_07_good();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_16_good();");
	CWE391_Unchecked_Error_Condition__sqrt_16_good();

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
	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_08_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_08_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_08_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_08_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_01_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_01_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_02_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_02_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_04_bad();");
	CWE391_Unchecked_Error_Condition__strtol_04_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_16_bad();");
	CWE391_Unchecked_Error_Condition__strtol_16_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_11_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_11_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_09_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_09_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_10_bad();");
	CWE391_Unchecked_Error_Condition__strtol_10_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_15_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_15_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_02_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_02_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_05_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_05_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_02_bad();");
	CWE391_Unchecked_Error_Condition__strtol_02_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_17_bad();");
	CWE391_Unchecked_Error_Condition__strtol_17_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_18_bad();");
	CWE391_Unchecked_Error_Condition__strtol_18_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_12_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_12_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_12_bad();");
	CWE391_Unchecked_Error_Condition__strtol_12_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_07_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_07_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_12_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_12_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_17_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_17_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_05_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_05_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_16_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_16_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_08_bad();");
	CWE391_Unchecked_Error_Condition__strtol_08_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_14_bad();");
	CWE391_Unchecked_Error_Condition__strtol_14_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_09_bad();");
	CWE391_Unchecked_Error_Condition__strtol_09_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_17_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_17_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_09_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_09_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_15_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_15_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_06_bad();");
	CWE391_Unchecked_Error_Condition__strtol_06_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_14_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_14_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_03_bad();");
	CWE391_Unchecked_Error_Condition__strtol_03_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_07_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_07_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_01_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_01_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_06_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_06_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_04_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_04_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_13_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_13_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_11_bad();");
	CWE391_Unchecked_Error_Condition__strtol_11_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_18_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_18_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_01_bad();");
	CWE391_Unchecked_Error_Condition__strtol_01_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_10_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_10_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_11_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_11_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_13_bad();");
	CWE391_Unchecked_Error_Condition__strtol_13_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_10_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_10_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_15_bad();");
	CWE391_Unchecked_Error_Condition__strtol_15_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_18_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_18_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_14_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_14_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_04_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_04_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_03_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_03_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_05_bad();");
	CWE391_Unchecked_Error_Condition__strtol_05_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_13_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_13_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_03_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_03_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__wcstombs_06_bad();");
	CWE391_Unchecked_Error_Condition__wcstombs_06_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__strtol_07_bad();");
	CWE391_Unchecked_Error_Condition__strtol_07_bad();

	printLine("Calling CWE391_Unchecked_Error_Condition__sqrt_16_bad();");
	CWE391_Unchecked_Error_Condition__sqrt_16_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
