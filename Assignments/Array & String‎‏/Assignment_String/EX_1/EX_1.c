 *  Name  : ex_1.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

char s[200] , ch ;
int i , frequency =0;

printf ("Enter a string:");
fflush (stdin); fflush (stdout);
gets (s);
printf ("Enter a character to find frequency: ");
fflush (stdin); fflush (stdout);
scanf ("%c",&ch);

for (i=0; s[i] != '\0';i++)
{
	if (ch == s[i])
	++frequency;
}

printf ("Frequency of %c is %d",ch,frequency);

	return 0;
}
