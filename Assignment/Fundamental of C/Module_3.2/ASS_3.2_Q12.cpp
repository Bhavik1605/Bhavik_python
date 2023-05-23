//program make a summation of given number
 
#include<stdio.h>

int main()
{
	int n,i,sum=0;
	int a;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	for(i=0;n>0;i++)
	{
		a = n % 10;
		sum+=a;
		n = n / 10;
	}
	
	printf("\nTotal sum of your all digits : %d",sum);
	
	return 0;
}
