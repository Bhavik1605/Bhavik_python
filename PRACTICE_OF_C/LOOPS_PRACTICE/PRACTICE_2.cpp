
//Program for print and sum of first 10 natural number
#include<stdio.h>
main()
{
	int i,sum=0;
	
	printf("First 10 Natural Number is : ");
	
	for(i=1;i<=10;i++)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("\nTotal Sum of First 10 Natural Number = %d",sum);
}
