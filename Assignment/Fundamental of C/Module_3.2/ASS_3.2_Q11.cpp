//program to find out the max from given number

#include<stdio.h>

int main()
{
	int a,i,j,max=0;
	
	printf("Enter a number : ");
	scanf("%d",&a);
	
	for(i=1;a>0;i++)
	{
		j = a % 10;
		if(j>max)
		{
			max=j;
		}
		a = a / 10;
	}
	printf("the maximum digit from given number : %d",max);
	
	
	return 0;
}
