#include<stdio.h>

int main()
{
	int sum=0;
	int l,n;
	printf("Enter the number above 2 digits : ");
	scanf("%d",&n);
	
	l = n%10;
	while(n>0)
	{
		n = n/10;
		sum=l+n;
	}
	printf("Sum of first and last digits : %d ",sum);
	
	return 0;
}
