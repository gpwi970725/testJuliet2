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

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_08::good();");
	CWE397_Throw_Generic_Exception__throw_exception_08::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_11::good();");
	CWE397_Throw_Generic_Exception__throw_exception_11::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_04::good();");
	CWE397_Throw_Generic_Exception__throw_exception_04::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_09::good();");
	CWE397_Throw_Generic_Exception__throw_exception_09::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_17::good();");
	CWE397_Throw_Generic_Exception__throw_exception_17::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_06::good();");
	CWE397_Throw_Generic_Exception__throw_exception_06::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_07::good();");
	CWE397_Throw_Generic_Exception__throw_exception_07::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_13::good();");
	CWE397_Throw_Generic_Exception__throw_exception_13::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_05::good();");
	CWE397_Throw_Generic_Exception__throw_exception_05::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_14::good();");
	CWE397_Throw_Generic_Exception__throw_exception_14::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_15::good();");
	CWE397_Throw_Generic_Exception__throw_exception_15::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_02::good();");
	CWE397_Throw_Generic_Exception__throw_exception_02::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_01::good();");
	CWE397_Throw_Generic_Exception__throw_exception_01::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_18::good();");
	CWE397_Throw_Generic_Exception__throw_exception_18::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_03::good();");
	CWE397_Throw_Generic_Exception__throw_exception_03::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_10::good();");
	CWE397_Throw_Generic_Exception__throw_exception_10::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_12::good();");
	CWE397_Throw_Generic_Exception__throw_exception_12::good();

	printLine("Calling CWE397_Throw_Generic_Exception__declare_exception_01::good();");
	CWE397_Throw_Generic_Exception__declare_exception_01::good();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_16::good();");
	CWE397_Throw_Generic_Exception__throw_exception_16::good();

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_08::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_08::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_11::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_11::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_04::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_04::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_09::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_09::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_17::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_17::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_06::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_06::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_07::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_07::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_13::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_13::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_05::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_05::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_14::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_14::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_15::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_15::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_02::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_02::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_01::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_01::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_18::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_18::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_03::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_03::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_10::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_10::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_12::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_12::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__declare_exception_01::bad();");
	CWE397_Throw_Generic_Exception__declare_exception_01::bad();

	printLine("Calling CWE397_Throw_Generic_Exception__throw_exception_16::bad();");
	CWE397_Throw_Generic_Exception__throw_exception_16::bad();

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
