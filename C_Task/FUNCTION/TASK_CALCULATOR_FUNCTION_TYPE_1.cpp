//function task : type -1 : calculator : without return type & without parameter

#include<stdio.h>
//function declaration
void sum();
void sub();
void mul();
void div();

int main()
{
	//function calling
	printf("--------Addition--------\n");
	sum();
	printf("\n\n\n-----Substraction-----\n");
	sub();
	printf("\n\n\n-----Multiplication-----\n");
	mul();
	printf("\n\n\n-------Division--------\n");
	div();
	
	return 0;
}

//function defination
void sum()
{
	int a,b;
	printf("Enter your first value : ");
	scanf("%d",&a);

	printf("Enter your second value : ");
	scanf("%d",&b);
	
	printf("\nYour addition is : %d",a+b);
}
void sub()
{
	int a,b;
	printf("\nEnter your first value : ");
	scanf("%d",&a);

	printf("Enter your second value : ");
	scanf("%d",&b);
	
	printf("\nYour substraction is : %d",a-b);
}
void mul()
{
	int a,b;
	printf("\nEnter your first value : ");
	scanf("%d",&a);

	printf("Enter your second value : ");
	scanf("%d",&b);
	
	printf("\nYour multiplication is : %d",a*b);
}
void div()
{
	float a,b;
	printf("\nEnter your first value : ");
	scanf("%f",&a);

	printf("Enter your second value : ");
	scanf("%f",&b);
	
	printf("\nYour divison is : %f",a/b);
}

