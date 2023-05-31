//addition,subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>

int main()
{
	int a[20][20],b[20][20];
	int n,r,c,i,j;
	
	printf("-------Functions_to_perform_using_2-D_Array-------\n");
	printf("(1) Addtion\n");
	printf("(2) Substraction\n");
	printf("(3) Multiplication\n");
	
	printf("\nEnter a choice : ");
	scanf("%d",&n);
	
	if(n==1)
	{	
		printf("\n----You_choose_Addition_of_2-D_Array----\n");
		printf("\nEnter Number of Row : ");
		scanf("%d",&r);
		printf("Enter Number of Column : ");
		scanf("%d",&c);
		
		printf("\n\n");
		
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("Enter First Array Element [%d][%d] : ",i+1,j+1);
				scanf("%d",&a[i][j]);
			}
		}
		printf("\n\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("Enter Second Array Element [%d][%d] : ",i+1,j+1);
				scanf("%d",&b[i][j]);
			}
		}
		printf("\n--------First Array---------\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n--------Second Array---------\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
		printf("\n--------Addition of Two Array---------\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d ",a[i][j]+b[i][j]);
			}
			printf("\n");
		}
	}
	
	else if(n==2)
	{	
		printf("\n----You_choose_Substraction_of_2-D_Array----\n");
		printf("\nEnter Number of Row : ");
		scanf("%d",&r);
		printf("Enter Number of Column : ");
		scanf("%d",&c);
		
		printf("\n\n");
		
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("Enter First Array Element [%d][%d] : ",i+1,j+1);
				scanf("%d",&a[i][j]);
			}
		}
		printf("\n\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("Enter Second Array Element [%d][%d] : ",i+1,j+1);
				scanf("%d",&b[i][j]);
			}
		}
		printf("\n--------First Array---------\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n--------Second Array---------\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
		printf("\n--------Substraction of Two Array---------\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d ",a[i][j]-b[i][j]);
			}
			printf("\n");
		}
	}
	
	else if(n==3)
	{	
		int r2,c2,k;
		int re[20][20];
		
		printf("\n----You_choose_Multiplication_of_2-D_Array----\n");
		printf("\nEnter Number of Row of first array : ");
		scanf("%d",&r);
		printf("Enter Number of Column of first array : ");
		scanf("%d",&c);
		
		printf("\nEnter Number of Row of second array : ");
		scanf("%d",&r2);
		printf("Enter Number of Column of second array : ");
		scanf("%d",&c2);
		printf("\n\n");
		
		if(c==r2)
		{
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("Enter First Array Element [%d][%d] : ",i+1,j+1);
					scanf("%d",&a[i][j]);
				}
			}
			printf("\n\n");
			
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("Enter Second Array Element [%d][%d] : ",i+1,j+1);
					scanf("%d",&b[i][j]);
				}
			}
			printf("\n--------First Array---------\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
			printf("\n--------Second Array---------\n");
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("%d ",b[i][j]);
				}
				printf("\n");
			}
			
			for(i=0;i<r;i++)
			{
				for(j=0;j<c2;j++)
				{
					re[i][j]=0;
					for(k=0;k<r2;k++)
					{
						re[i][j]+=a[i][k]*b[k][j];
					}
				}
			}
			printf("\n--------Multiplication of Two Array---------\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("%d ",re[i][j]);
				}
				printf("\n");
			}	
		}
		else
		{
			printf("\nYour Number of Column of First Array and Number of Row of Second Array is Not Equal!!!");
		}
	}
	
	else
	{
		printf("\nYour Input is Invalid!!!");
	}
	return 0;
}
