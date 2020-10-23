#include <stdio.h>
#include <stdlib.h>
/* this program return the maximum between 2 integers*/
/* function returning the max between two numbers */
int max(int num1, int num2) {
   /* local variable declaration */
   int result;
   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result; 
}

int main(int argc, char **argv){
	/*	printf("argc=%d\n", argc); */
	if (argc != 3){
		printf("usage: %s <n> <m>\n", argv[0]);
		return 1;
	} else {
		printf("max=%d\n", max(atoi(argv[1]), atoi(argv[2]) ) );
	}
	return 0;
}
