//Program to check number is prime or not

#include<stdio.h>
int main()
{
	int n,i;
	int a=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			a=1;
			break;
		}
	}
	if(a==0)
	{
		printf("%d number is prime number",n);
	}
	else if(n==1 || n==0)
	{
		printf("%d number is natural number",n);
	}
	else
	{
		printf("%d number is not prime number",n);
	}
	return 0;
}
