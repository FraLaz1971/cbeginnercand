#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

void get_limits(){
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
}

void get_sizes(){
	printf("size of char=%d [BYTES]\n", sizeof(char));
	printf("size of uchar=%d [BYTES]\n", sizeof(unsigned char));
	printf("size of shortint=%d [BYTES]\n", sizeof(short int));
	printf("size of ushortint=%d [BYTES]\n", sizeof(unsigned short int));
	printf("size of int=%d [BYTES]\n", sizeof(int));
	printf("size of uint=%d [BYTES]\n", sizeof(unsigned int));
	printf("size of longint=%d [BYTES]\n", sizeof(long int));
	printf("size of ulongint=%d [BYTES]\n", sizeof(unsigned long int));
	printf("size of float=%d [BYTES]\n", sizeof(float));
	printf("size of double=%d [BYTES]\n", sizeof(double));
}

int main(int argc, char** argv) {
	get_limits();
	get_sizes();
	return 0;
}
