//find factorial using recursion

#include<stdio.h>

double fact(int n)
{
	if(n<=0)
	{
		return 1;
	}
	return n*fact(n-1);
}
int main()
{
	int n;
	
	printf("Enter a number to find factorial : ");
	scanf("%d",&n);
	
	printf("Your %d number factorial is : %lf ",n,fact(n));
	
	return 0;
}
