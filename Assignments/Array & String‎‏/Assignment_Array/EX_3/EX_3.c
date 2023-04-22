/*
 * main.c
 *  Name  : ex_3.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int row ,colum ,i,j;

printf("Enter rows and column of matrix :\n");
fflush (stdin); fflush (stdout);
scanf ("%d%d",&row,&colum);
printf ("Enter elements of matrix :");

float a[row][colum];

for (i=0;i<row;i++)
{
	for (j=0;j<colum;j++)
	{
		printf ("\nEnter elements a%d%d :",i+1,j+1);
		fflush (stdin); fflush (stdout);
		scanf ("\t%f",&a[i][j]);

	}
}

printf ("\n Entered Matrix :\n");

for (i=0;i<row;i++)
{
	for (j=0;j<colum;j++)
	{
	printf ("%.2f\t",a[i][j]);

	}
	printf("\r\n");
}

printf ("Transpose of Matrix : \n");

for (i=0;i<colum;i++)
{
	for (j=0;j<row;j++)
	{
	printf ("%.2f\t",a[j][i]);

	}
	printf("\r\n");
}








return 0;
}
