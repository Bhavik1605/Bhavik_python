//Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>

int main()
{
	printf("-------manu--------\n");
	printf("(1) Addition\n");
	printf("(2) Substraction\n");
	printf("(3) Multiplication\n");
	printf("(4) Division\n");
	
	int num,a,b;
	
	printf("\nEnter your choice : ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1 :
			printf("Enter first number : ");
			scanf("%d",&a);
			printf("Enter second number : ");
			scanf("%d",&b);
			printf("\nYour Addition is : %d",a+b);
			break;
		case 2 :
			printf("\nEnter first number : ");
			scanf("%d",&a);
			printf("Enter second number : ");
			scanf("%d",&b);
			printf("\nYour Substraction is : %d",a-b);
			break;
		case 3 :
			printf("\nEnter first number : ");
			scanf("%d",&a);
			printf("Enter second number : ");
			scanf("%d",&b);
			printf("\nYour Multiplication is : %d",a*b);
			break;
		case 4 :
			float c,d;
			printf("\nEnter first number : ");
			scanf("%f",&c);
			printf("Enter second number : ");
			scanf("%f",&d);
			printf("\nYour Division is : %f",c/d);
			break;
		default :
			printf("Input is Invalid!!!");
			break;
	}
	return 0;
}
