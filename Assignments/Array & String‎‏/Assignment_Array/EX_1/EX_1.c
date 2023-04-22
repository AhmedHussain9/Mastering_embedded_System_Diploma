/*
 * main.c
 *  Name  : ex_1.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
 float matrix1[2][2] , matrix2[2][2] , sum [2][2];
int r , c;
printf ("Enter the element of 1st matrix\n");
for (r=0;r<2;r++)
 {
for (c=0;c<2;c++)
{
	printf ("Enter a%d%d: ",r+1,c+1);
	fflush (stdin); fflush(stdout);
	scanf ("%f",&matrix1[r][c]);
 }
}

printf ("Enter the element of 2st matrix\n");
for (r=0;r<2;r++)
 {
for (c=0;c<2;c++)
{
	printf ("Enter a%d%d: ",r+1,c+1);
	fflush (stdin); fflush(stdout);
	scanf ("%f",&matrix2[r][c]);
	sum[r][c] = matrix1 [r][c] + matrix2 [r][c];

 }
}

printf ("sum of matrix\n");
for (r=0;r<2;r++)
 {
for (c=0;c<2;c++)
{
	printf ("%.2f\t",sum[r][c]);
 }
printf ("\r\n");
}

return 0;
}






