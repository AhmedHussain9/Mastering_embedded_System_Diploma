/*
 * main.c
 *  Name  : ex_3
 *  Author:Ahmed Hussien
 */
#include <stdio.h>
#include <stdlib.h>

void Reverse (void);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("Enter a sentence : ");
	Reverse();
return 0;
	}

void Reverse (void)
{

		char sentence1;
		scanf ("%c",&sentence1);
		if (sentence1 != '\n')
		{
			Reverse();
			printf("%c",sentence1);

		}
}




