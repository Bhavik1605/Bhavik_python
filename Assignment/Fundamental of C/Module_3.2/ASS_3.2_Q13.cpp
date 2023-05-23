//program you have to make a summation of first and last Digit.

#include<stdio.h>

int main()
{
	int n,i,ld,fd;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	ld = n % 10;
	
	for(i=1;n>10;i++)//condition for 2 or above 2 digit
	{
		n = n/10;
	}
	
	printf("\nSummation of first and last Digit : %d",n + ld);
	
	return 0;
}
