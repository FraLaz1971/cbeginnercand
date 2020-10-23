#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <error.h>
#include <errno.h>

/* struct_test.c memory allocation and structure usage example */

typedef struct {
	char *term; /* terminal type on where to plot */
	char *x_label; /* label of the x axis */
	char *y_label; /* label of the y axis */
	char *title;   /* label of the whole plot */
	char *infile;   /* file containing data to plot */
	char *outfile;   /* file containing data to plot */
	char *plot_engine;   /* plotting tool */
	int plate; /* counter id of all plot_2d_data generated */
} plot_2d_data;

void plot_2d_data_set_default(plot_2d_data *p2ds){
	      p2ds->term="ps";
	      p2ds->x_label="time (s)";
	      p2ds->y_label="amplitude (counts)";
	      p2ds->title="time vs amplitude";
	      p2ds->infile="datafile010.tsv";
	      p2ds->outfile="outfile010.ps";
	      p2ds->plot_engine="gnuplot";
	      p2ds->plate=0;
}

void write_plot_2d_data(plot_2d_data *p2ds){
	printf("# 2D PLOT metadata file start\n");
	printf("TERM, %s\n", p2ds->term);
	printf("X_LABEL, %s\n", p2ds->x_label);
	printf("Y_LABEL, %s\n", p2ds->y_label);
	printf("TITLE, %s\n", p2ds->title);
	printf("PLOT_ENGINE, %s\n", p2ds->plot_engine);
	printf("INFILE, %s\n", p2ds->infile);
	printf("OUTFILE, %s\n", p2ds->outfile);
	printf("PLOT_NUMBER, %i\n", p2ds->plate);
	printf("# 2D PLOT metadata file end\n");
}

int main() {
	int kk, jj;
	char *str1 = (char *) "This is a text string";
	char *str2 = (char *) malloc(strlen(str1));
	/* Memory allocation for 5 items of struct plot_2d_data type */
	plot_2d_data *s1 = (plot_2d_data *)calloc(5, sizeof(plot_2d_data));  
	errno = 0;
	if(s1 == NULL)
	{
	      if(errno == ENOMEM) printf("Error ENOMEM: Insufficient memory available\n");
	}
	printf("std2 = %s\n", str2);
	strcpy(str2,str1); /* Make a copy of the string str1 on str2 */
	for(kk=0; kk < 5; kk++)
	{
		fprintf(stderr, "processing 2Dplot n. %d\n", kk);
		plot_2d_data_set_default(&s1[kk]);
		write_plot_2d_data(&s1[kk]);
	 }
	for(kk=0; kk < 5; kk++)
	{
	      s1[kk].term="DEFAULT";
	      s1[kk].x_label="DEFAULT";
	      s1[kk].y_label="DEFAULT";
	      s1[kk].title="DEFAULT";
	      s1[kk].infile="DEFAULT";
	      s1[kk].outfile="DEFAULT";
	      s1[kk].plot_engine="DEFAULT";
	      s1[kk].plate=1;
	 }
	for(jj=0; jj < 5; jj++)
	{
		fprintf(stderr, "processing 2Dplot n. %d\n", jj);
		write_plot_2d_data(&s1[jj]);
	 }
	 printf("std2 = %s\n", str2);
	/* Overwrite the string str2 */
	 strcpy(str2,"ciao-pippo"); 
	 printf("std2 = %s\n", str2);
	 free(s1);
	 free(str2);
}
