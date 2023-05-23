#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter your number : ");
	scanf("%d",&n);
	int a=0;
	for(i=2;i<=n-1;i++)
	{
		if(n % i == 0)
		{
			a=1;
			break;
		}
	}
	if(n==0 || n==1)
	{
		printf("%d is not prime nor composite\n",n);
	}
	else if(a==0)
	{
		printf("%d is prime number.\n",n);
	}
	else
	{
		printf("%d is composite number.",n);
	}
		
	return 0;
}
