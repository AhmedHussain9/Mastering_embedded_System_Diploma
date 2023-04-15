/*
 * main.c
 *  Name  : ex_2.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
int number;

printf("Enter a integer:");

fflush(stdin); fflush(stdout);

scanf ("%d",&number);

printf ("You entered: %d",number);

return 0;
}