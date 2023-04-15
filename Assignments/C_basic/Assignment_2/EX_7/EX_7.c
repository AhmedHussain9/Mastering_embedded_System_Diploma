/*
 * main.c
 *  Name  : ex_7.c
 *  Author:Ahmed Hussien
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int N,i,fact=1;



printf("Enter an integer: ");
fflush (stdin); fflush(stdout);
scanf("%d",&N);

if(N>0)
{
for(i=1;i<=N;i++) {	fact *= i;}
printf("%d Factorial = %d ",N,fact);
}

else if(N==0) {	printf("0 Factorial = 1 ");}
else{printf("Error!!! Factorial of negative number doesn't exist.");}

return 0;
}