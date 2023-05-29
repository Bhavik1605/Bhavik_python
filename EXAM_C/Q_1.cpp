//Q-1 : Swap Number without third variable.


#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After perform swapping value of a is : %d",a);
	printf("\nAfter perform swapping value of b is : %d",b);
	return 0;
}
