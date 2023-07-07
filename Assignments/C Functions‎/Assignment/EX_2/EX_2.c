/*
 * main.c
 *  Name  : ex_2
 *  Author:Ahmed Hussien
 */
#include "stdio.h"
#include <stdlib.h>

int fact (int f);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num;

	printf ("Enter an positive integer :") ;
	scanf("%d",&num);
	if (num<0)
		    	{
		    		printf("Error!!");
		    	return 0;
		    	}

	printf("\nFactorial of %d = %d",num,fact(num));



		return 0;
}

int fact (int x)
{

	    if(x < 2)

	        return 1;

	    else

	    return x * fact(x- 1);



}


