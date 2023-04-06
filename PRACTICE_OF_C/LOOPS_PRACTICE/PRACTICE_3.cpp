//10 numbers from user and find their sum and average.
#include<stdio.h>
main()
{
	int a,i;
	float sum=0,avg;
	for(i=1;i<=10;i++)               
	{
		printf("Enter your %d number : ",i);
		scanf("%d",&a);
		sum=sum+a;
		avg=sum/10;
	}
	printf("\nTOTAL SUM OF 10 Number is = %f",sum);
	printf("\nTOTAL AVG is = %.2f",avg);
}
