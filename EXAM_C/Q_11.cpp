//program to addition of two number using pointer and function

#include<stdio.h>

//function defination and decalaration
int sum(int *a,int *b)
{
	return (*a)+(*b);
}
int main()
{
	int a,b,total;
	
	//take input by user
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	//function calling
	total = sum(&a,&b);//calling by reference
	
	printf("Total addition of two number is : %d",total);
	
	return 0;
}
