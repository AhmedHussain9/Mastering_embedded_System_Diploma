/*
 * main.c
 *  Name  : ex_4
 *  Author:Ahmed Hussien
 */
#include <stdio.h>
#include <stdlib.h>

int calc_power (int num1 , int num2);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int power,num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("\nEnter power number(positive integer): ");
	scanf("%d",&power);
	printf("\n%d ^ %d = %d",num,power,calc_power(num,power));


	return 0;
}

int calc_power (int num1 , int num2)
{

	if(num2 > 0)

		return num1*calc_power(num1,num2-1);


	else
		return 1;

}
