//print number in reverse order

#include<stdio.h>
int main()
{
	int n,i,ld;
	
	printf("Enter a numer : ");
	scanf("%d",&n);
	
	printf("The reverse number is : ");
	for(i=1;n>0;i++)
	{
		ld = n % 10;
		n = n / 10;
		printf("%d",ld);
	}
	
	return 0;
}
