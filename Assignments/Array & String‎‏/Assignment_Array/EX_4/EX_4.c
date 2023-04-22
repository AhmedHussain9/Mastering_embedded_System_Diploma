/*
 * main.c
 *  Name  : ex_4.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int n,i,element,location;

	printf ("Enter number of elements :");
	fflush(stdin); fflush(stdout);
	scanf ("%d",&n);

	int arr[n];

	for (i=0;i<n;i++)
	{
		arr[i]=i+1;
		printf("%d ",arr[i]);

	}

	printf("\nEnter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);

	printf("\nEnter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	for(i=n;i>=location;i--)
{
			arr[i]=arr[i-1];
		}

		n++;
		arr[location-1] = element;
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
}


return 0;
}