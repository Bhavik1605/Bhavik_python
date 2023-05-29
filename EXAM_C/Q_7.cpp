//multiplication of 2d array
#include<stdio.h>
int main()
{
	int a[2][2],i,j,k;
	int b[2][2],re[2][2];
	
	//first array input by user
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("First array Element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	
	for(i=0;i<2;i++)//inputs of second array by user
	{
		for(j=0;j<2;j++)
		{
			printf("second array Element [%d][%d] : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n---------------Your First Araay---------------\n");//print first array
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n---------------Your Second Araay---------------\n");//print second array
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			re[i][j]=0;
			for(k=0;k<2;k++)
			{
				re[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\n---------------Multiplication of two matrix---------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",re[i][j]);
		}
		printf("\n");
	}
	return 0;
}
