/*
 * main.c
 *  Name  : ex_1.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int number1;
printf ("Enter an integer you want to check: ");
fflush (stdin);  fflush(stdout);
scanf("%d",&number1);

if (number1%2==0) {printf ("%d is even",number1); }
else {printf ("%d is odd",number1);}





return 0;
}