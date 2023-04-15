/*
 * main.c
 *  Name  : ex_6.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
float a,b,temp;

printf("Enter value of a: ");
fflush(stdin); fflush(stdout);
	scanf("%f",&a);

printf("\nEnter value of b: ");
fflush(stdin); fflush(stdout);
	scanf("%f",&b);

	// swap
	temp=a;
	a=b;
	b=temp;

printf("\nAfter swapping, value of a =%f",a);
printf("\nAfter swapping, value of b =%f",b);

return 0;
}