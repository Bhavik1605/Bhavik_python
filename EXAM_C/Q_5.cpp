//print the maximum number from given number

#include<stdio.h>
int main()
{
	int n,i,ld;
	int max=0;
	
	printf("Enter a numer : ");
	scanf("%d",&n);
	
	for(i=1;n>0;i++)
	{
		ld = n % 10;
		if(ld>max)
		{
			max=ld;
		}
		n = n / 10;
	}
	printf("The maximum number is : %d",max);
	return 0;
}
