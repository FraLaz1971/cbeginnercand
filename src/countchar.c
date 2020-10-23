#include <stdio.h>
/* count characters in input; 1st version */
int main()
{
	long nc;
	nc = 0;
	printf("**********************************\n");
	printf("** this program counts characters\n");
	printf("**********************************\n");
	printf("to get result press Ctrl-D\n");
	printf("please type some word(s) and then press enter\n");
	while (getchar() != EOF)
		++nc;
	printf("you entered %ld characters\n", nc);
	printf("newline included\n");
	return 0;
}

