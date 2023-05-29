//make summation of given number

#include<stdio.h>
int main()
{
	int n,i,ld;
	int sum=0;
	
	printf("Enter a numer : ");
	scanf("%d",&n);
	
	for(i=1;n>0;i++)
	{
		ld = n % 10;
		sum+=ld;
		n = n / 10;
	}
	printf("The summation of digits are : %d",sum);
	return 0;
}
