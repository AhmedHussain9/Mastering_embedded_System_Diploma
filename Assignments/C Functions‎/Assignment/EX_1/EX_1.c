/*
 * main.c
 *  Name  : ex_1
 *  Author:Ahmed Hussien
 */
#include "stdio.h"
#include <stdlib.h>

int prime_check (int num);
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number1,number2,i;

printf("Enter two numbers (intervals): ");
scanf("%d %d",&number1,&number2);

printf("\nPrime numbers between %d and %d are: ",number1,number2);

for (i=number1;i<=number2;i++)
{
 if (prime_check(i))
	 printf("%d ",i);

}

	return 0;
}

int prime_check (int num)
{
	int i;

if (num ==1 || num ==0)
return 0;
for (i=2;i<num;i++)
{
	if(num%i == 0)
		return 0;
}
return 1;
}
