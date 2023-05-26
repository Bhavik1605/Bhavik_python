#include<stdio.h>

int main()

{
	
	int a[4][6];
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("Enter your element [%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\nYour complete array is [4][6] : \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
