#include<stdio.h>
int main()
{
	int i,a,sum=0;
	printf("Enter your number : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		printf("%d\n",i);
		sum+=i;
	}
	
	printf("\nyour sum is : %d",sum);
	return 0;
}
