//program to print fibonaaci series 

#include<stdio.h>

int main()
{
	int i,n,a=0,b=1,c;//a,b is a first two term of fibonaci series
	
	//take input from user
	printf("Enter a number of term for fibonacci series : ");
	scanf("%d",&n);
	
	printf("\nThe series of fibonaci is : %d %d",a,b);//first print two term of series
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		
		printf(" %d",c);
	}
	
	
	return 0;
}
