/*
 * main.c
 *  Name  : ex_5.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int n,element,i;

printf("Enter number of elements: ");
fflush (stdin); fflush(stdout);
scanf("%d",&n);

int arr[n];
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}

printf("\nEnter the elements to be searched: ");
fflush (stdin); fflush(stdout);
scanf("%d",&element);
for(i=0;i<n;i++)
{
if(arr[i] == element)
{
	printf("\nNumber found at the location = %d",i+1);
		break;
}

}


return 0;
}
