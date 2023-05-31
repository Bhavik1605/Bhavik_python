//sorting of array elements in ascending or descending order as per user’s choice 

#include<stdio.h>

int main()
{
	int num;
	
	printf("-------manu--------\n");
	printf("(1) Ascending\n");
	printf("(2) Descending\n");
	
	printf("\nEnter your choice : ");
	scanf("%d",&num);
	
	if(num==1)
	{
		int n,a[5];
		int i,j,temp;
		
		printf("\nEnter no. of terms to print Ascending order : ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
			{
				printf("Enter %d element : ",i+1);
				scanf("%d",&a[i]);
			}
	
			//to sort the array
			for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
						{
							if(a[i]>a[j])//ascending order
								{
									//logic to swap element
									temp=a[i];
									a[i]=a[j];
									a[j]=temp;
								}
						}
				}
		printf("\n---------Your Ascending Order----------\n");
		for(i=0;i<5;i++)
			{
				printf("Your %d Element is : %d\n",i+1,a[i]);
			}
	}
	
	else if(num==2)
	{
		int n,a[5];
		int i,j,temp;
		
		printf("\nEnter no. of terms to print Descending order : ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
			{
				printf("Enter %d element : ",i+1);
				scanf("%d",&a[i]);
			}
	
			//to sort the array
			for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
						{
							if(a[i]<a[j])//Descending order
								{
									//logic to swap element
									temp=a[i];
									a[i]=a[j];
									a[j]=temp;
								}
						}
				}
		printf("\n---------Your Descending Order----------\n");
		for(i=0;i<5;i++)
			{
				printf("Your %d Element is : %d\n",i+1,a[i]);
			}
	}
	else
	{
		printf("Your input is Invalid!!!");
	}

	return 0;
}
