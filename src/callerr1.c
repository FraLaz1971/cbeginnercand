#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int catfun(int *pargc, char ** pargv){
	 int i=0;
        printf("n. of cmdline arguments: %d :\n\n", *pargc);
        for (i=0; i<*pargc; i++)
                printf("argv[%d] = %s\n", i, pargv[i]);
	/*perror() print error failure in case given command 
	doesn't exist or corrutp, try with /bin/fat */
	char cmd[10] = "/bin/cat";
	if (*pargc > 1) {
		execlp(cmd, "cat", pargv[1], (char *) NULL);
		perror("exec failure");
		return 1;
	}
	printf("Usage: %s text_file\n", pargv[0]);
	return 2;
}

int main(int argc, char **argv){
	int r = catfun (&argc, argv);
		printf("r = %d \n" , r );
	if ( r ){
		printf("excution failed :-( r = %d \n" , r );
	} else {
		printf("correct excution! r = %d \n", r );
	}
	return 0;
}

