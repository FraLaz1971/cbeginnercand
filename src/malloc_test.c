#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <error.h>
#include <errno.h>
/* malloc_test.c memory allocation and structure usage example */
typedef struct {
	   int ii;
	   double dd;
} SSS;

int main() {
	   int kk, jj;
	   char *str1 = (char *) "This is a text string";
	   char *str2 = (char *) malloc(strlen(str1));
	   errno = 0;
	   SSS *s1 = (SSS *)calloc(4, sizeof(SSS));  /* Memory for 4 of struct SSS */
	   if(s1 == NULL)
	   {
	      if(errno == ENOMEM) printf("Error ENOMEM: Insufficient memory available\n");
	   }
	   printf("std2 = %s\n", str2);
	   strcpy(str2,str1); /* Make a copy of the string str1 on str2 */
	   for(kk=0; kk < 5; kk++)
	   {
	      s1[kk].ii=kk;
	   }
	   for(jj=0; jj < 5; jj++)
	   {
	      printf("Value stored: %d\n",s1[jj].ii);
	   }
	   printf("std2 = %s\n", str2);
	   strcpy(str2,"ciao-pippo"); /* Overwrite the string str2 */
	   printf("std2 = %s\n", str2);
	   free(s1);
	   free(str2);
}
