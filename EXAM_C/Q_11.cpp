//program to addition of two number using pointer and function

#include<stdio.h>

int sum(int *a,int *b)
{
	return (*a)+(*b);
}
int main()
{
	int a,b,total;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	total = sum(&a,&b);//function calling
	
	printf("Total addition of two number is : %d",total);
	
	return 0;
}
