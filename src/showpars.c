#include <stdio.h>
/* usage: ./showpars <par1> <par2> ... <parn> */
int main(int argc, char *argv[]) {
	int i=0;
	printf("n. of cmdline arguments: %d :\n\n", argc);
	for (i=0; i<argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);
	return 0;
}

