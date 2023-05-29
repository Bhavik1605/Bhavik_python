//shorting of array in increasing formate
#include<stdio.h>
int main()
{
	int a[5],,j;
	int temp=0;
	
	//take 5 element of array
	for(i=0;i<5;i++)
	{
		printf("\nEnter element number - %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("\n------shorting in increasing form---------\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("Your %d element is : %d\n",i+1,a[i]);
	}
	return 0;
}
