//print number in reverse order

#include<stdio.h>

int main()
{
	int a,i,j;
	
	printf("Enter a number : ");
	scanf("%d",&a);
	
	printf("\nYour number in reverse order : ");
	
	for(i=1;a>0;i++)
	{
		j = a % 10;
		printf("%d",j);
		a = a / 10;
	}
	
	return 0;
}
