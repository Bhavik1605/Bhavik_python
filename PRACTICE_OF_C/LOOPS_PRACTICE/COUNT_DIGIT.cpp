#include<stdio.h>
int main()
{
	int i,n,c=0;
	
	printf("Enter the digits : ");
	scanf("%d",&n);
	
	for(i=0;i<n;)
	{
		n = n/10;
		c++;
	}
	printf("%d",c);
	return 0;
}
