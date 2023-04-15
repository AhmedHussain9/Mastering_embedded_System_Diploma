/*
 * main.c
 *  Name  : ex_6.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int sum=0,i,N;
	printf("Enter an integer: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&N);

	for(i=1;i<=N;i++)
	{
		sum += i;
	}
	printf("Sum = %d",sum);

return 0;
}
