#include<stdio.h>
int main()
{
	int a,i,num,e=0,o=0,sumofe=0,sumofo=0;
	
	printf("enter value upto take input : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		printf("\nEnter your %d value : ",i);
		scanf("%d",&num);
		
		if(num % 2 == 0)
		{
			e++;
			sumofe+=num;
		}
		else
		{
			o++;
			sumofo+=num;
		}
	}
		printf("\n Total count of even number = %d \n",e);
		printf("\n Total count of odd number = %d \n",o);
		printf("\n Total sum of even number = %d \n",sumofe);
		printf("\n Total sum of odd number = %d \n",sumofo);
	return 0;
}
