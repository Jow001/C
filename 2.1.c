#include <stdio.h>
#include <limits.h>
#include <float.h>

main(void)
{
	printf("SIGNED:\n");
	printf("char limits: [%d,%d] \n", CHAR_MIN, CHAR_MAX);
	printf("short limits: [%d,%d] \n", SHRT_MIN, SHRT_MAX);
	printf("int limits: [%d,%d] \n", INT_MIN, INT_MAX);
	printf("long limits: [%d,%d]\n", LONG_MIN, LONG_MAX);
	printf("float limits: [%d,%d] \n", FLT_MIN, FLT_MAX);
	printf("double limits: [%d,%d] \n", DBL_MIN, DBL_MAX);
	printf("long double limits: [%d,%d]\n", LDBL_MIN, LDBL_MAX);

	printf("UNSIGNED:\n");

	printf("char limits: [0,%d]\n", UCHAR_MAX);
	printf("short limits: [0,%d]\n", USHRT_MAX);
	printf("int limits: [0,%d]\n", UINT_MAX);
	printf("long limits: [0,%d]\n", ULONG_MAX);
	printf("float limits: [0,%d]\n", FLT_MAX);
	printf("double limits: [0,%d]\n",DBL_MAX);
	printf("long double limits: [0,%d]\n",LDBL_MAX);

}
