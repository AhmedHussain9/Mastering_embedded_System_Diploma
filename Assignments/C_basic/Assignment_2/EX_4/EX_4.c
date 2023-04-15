/*
 * main.c
 *  Name  : ex_4.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	float number;
	printf("Enter a number: ");
	fflush (stdin);  fflush(stdout);
	scanf ("%f",&number);
	if (number>0){printf("%.2f is positive.",number);}
	else if (number==0) {printf(" You entered zero.");}
	else {printf("%.2f is negative.",number);}


return 0;
}
