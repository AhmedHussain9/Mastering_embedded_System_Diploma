/*
 * main.c
 *  Name  : ex_4.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
float number1,number2;

printf("Enter two numbers:");

fflush(stdin); fflush(stdout);

scanf ("%f %f",&number1,&number2);

printf ("Product: %f",number1*number2);

return 0;
}