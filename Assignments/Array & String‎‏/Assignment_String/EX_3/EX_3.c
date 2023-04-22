/*
 * main.c
 *  Name  : ex_3.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
char str[100],temp;
int i,j;
printf("Enter the string:");
fflush (stdin); fflush (stdout);
scanf("%s",str);
i=0;
j=strlen(str)-1;
while(i<j)
{
 temp=str[i];
 str[i]=str[j];
  str[j]=temp;
  i++;
  j--;
}
printf("Reversed string: %s",str);

    return 0;
}
