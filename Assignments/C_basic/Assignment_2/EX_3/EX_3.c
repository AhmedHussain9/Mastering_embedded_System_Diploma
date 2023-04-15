/*
 * main.c
 *  Name  : ex_3.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
float number1 , number2 , number3;

printf ("Enter three numbers: ");
fflush (stdin);  fflush(stdout);
scanf ("%f %f %f",&number1,&number2,&number3);

if (number1>number2){
if (number1>number3)
{printf("Largest number = %f",number1);}

else {printf("Largest number = %f",number3);}
}

else
{
if (number2>number3)

{printf("Largest number = %f",number2);}

else {printf("Largest number = %f",number3);}

}
return 0;
}