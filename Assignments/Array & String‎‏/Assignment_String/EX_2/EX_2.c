/*
 * main.c
 *  Name  : ex_2.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

char STR[200];
int i, length=0;

printf ("Enter a string:");
fflush (stdin); fflush (stdout);
gets(STR);

for (i=0;STR[i] != 0 ; i++)
{
	length++;
}

	printf ("The length of the entered string is %d",length);

	return 0;
}
