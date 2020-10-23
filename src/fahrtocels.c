#include <stdio.h>
#include <stdlib.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main(int argv, char **argc)
{
	int fahr, celsius;
	int lower, upper, step;
    if (argv < 4 )
    {
        printf("usage: %s <lower> <upper> <step> \n", argc[0]);
    } else {
        lower = atoi(argc[1]); /* lower limit of temperature scale */
        upper = atoi(argc[2]); /* upper limit */
        step = atoi(argc[3]); /* step size */
        fahr = lower;
        while (fahr <= upper) {
            celsius = 5 * (fahr-32) / 9;
            printf("%d\t%d\n", fahr, celsius);
            fahr = fahr + step;
        }
        
    }
	return 0;
}

