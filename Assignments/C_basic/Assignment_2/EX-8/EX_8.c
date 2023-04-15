/*
 * main.c
 *  Name  : ex_8.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

float Number1,Number2,result=0;
char operand;
printf("Enter operator either + or - or * or / : \n");
fflush (stdin); fflush(stdout);
scanf("%c",&operand);

printf("Enter two operands: ");
fflush (stdin); fflush(stdout);
scanf("%f %f",&Number1,&Number2);


switch(operand)
   {
	case '+':
		result = Number1+Number2;
		printf("\n %f %c %f = %f",Number1,operand,Number2,result);
		break;

	case '-':
		result = Number1-Number2;
		printf("\n %f %c %f = %f",Number1,operand,Number2,result);
		break;

	case '*':
		result = Number1*Number2;
		printf("\n %f %c %f = %f",Number1,operand,Number2,result);
		break;

	case '/':
		result = Number1/Number2;
		printf("\n %f %c %f = %f",Number1,operand,Number2,result);
		break;
	}
return 0;
}