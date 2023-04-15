/*
 * main.c
 *  Name  : ex_3.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int number1,number2;

printf("Enter two integers:");

fflush(stdin); fflush(stdout);

scanf ("%d %d",&number1,&number2);

printf ("Sum:%d",number1+number2);

return 0;
}