#include <stdio.h>
#include <stdlib.h>
/* this program prints the first n number, given n*/
/* usage: ./printn <n>*/
/* ./printn 3
or
/* ./printn 21
... and so on */
int main(int argc, char *argv[]){
        int n, m;
	if (argc == 2){
		m=atoi(argv[1]);
		while (n<=m){
                printf("%d\n", n);
                n++;
        }
        return 0;
	} else {
		printf("usage: %s <n>\n", argv[0]);
		return 1;
	}
}

