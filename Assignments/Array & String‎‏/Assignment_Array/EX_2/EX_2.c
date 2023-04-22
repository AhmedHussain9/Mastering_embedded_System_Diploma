/*
 * main.c
 *  Name  : ex_2.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int i , n;
float sum =0;

printf ("Enter the numbers of data : ");
fflush(stdin);  fflush(stdout);
scanf("%d",&n);

float arr[n];


for (i=0;i<n;i++)
{
	printf ("\n%d. Enter number : ",i+1);
	fflush(stdin);  fflush(stdout);
	scanf("%f",&arr[i]);
	sum+= arr[i];


}
printf(" average = : %.2f",sum/n);



return 0;
}






