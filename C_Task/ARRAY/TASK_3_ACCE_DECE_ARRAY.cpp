#include<stdio.h>

int main()
{
	int a[5];
	int i,j,temp;
	
	//to take i/p from user
	
	for(i=0;i<5;i++)
	{
		printf("Enter element : ");
		scanf("%d",&a[i]);
	}
	
	//to sort the array
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])//acending order
			{
				//logic to swap element
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n\n\n");
	//to print the sorted array
	for(i=0;i<5;i++)
	{
		printf("Element a[%d] = %d\n",i,a[i]);
	}
	
	
	printf("\n\n\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])//decending order
			{
				//logic to swap element
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	//to print the sorted array
	for(i=0;i<5;i++)
	{
		printf("Element a[%d] = %d\n",i,a[i]);
	}
	
	return 0;
}
