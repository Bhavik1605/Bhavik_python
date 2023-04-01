//EVEN_ODD CHECK BY TURNERY OPERATOR

#include<stdio.h>
main()
{
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	num % 2 == 0?printf("This number is Even"):printf("This number is Odd");
}
