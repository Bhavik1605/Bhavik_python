#include<stdio.h>
int main()
{
	int i,a,sum=0;
	for(i=1;i<=5;i++)
	{
		printf("\nEnter your number %d is : ",i);
		scanf("%d",&a);
		sum+=a;
	}
	printf("\nTotal sum is : %d",sum);
	return 0;
}
