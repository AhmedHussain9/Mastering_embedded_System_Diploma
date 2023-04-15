/*
 * main.c
 *  Name  : ex_2.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

char x;

printf ("Enter an alphabet: ");
fflush (stdin);  fflush(stdout);
scanf ("%c",&x);

// Using ASCII Code

if (x==65 ||x==97 ||x== 69 ||x== 101 ||x==73 ||x==105||	x==85 ||x==117
	      ||x==79 ||x== 111){printf("\n %c is a vowel. ",x);}
else{ printf("\n %c is a consonant. ",x);}


return 0;
}