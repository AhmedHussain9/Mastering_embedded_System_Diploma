/*
 * main.c
 *  Name  : ex_7.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a,b;

printf("Enter value of a: ");
fflush(stdin);  fflush(stdout);
	scanf("%f",&a);

printf("\nEnter value of b: ");
fflush(stdin);  fflush(stdout);
	scanf("%f",&b);

a=a*b;
b=a/b;
a=a/b;

printf("\nAfter swapping, value of a =%f",a);
printf("\nAfter swapping, value of b =%f",b);


return 0;
}