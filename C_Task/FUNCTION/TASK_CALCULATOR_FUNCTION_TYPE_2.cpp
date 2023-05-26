//function task : calculator : type -2 : without return type & with parameter

#include<stdio.h>

//function declaration
void my_add(int a,int b);
void my_sub(int a,int b);
void my_mul(int a,int b);
void my_div(float a,float b);

int main()
{
	int m,n;
	printf("---------Addition----------\n");
	printf("\nEnter your first number = ");
	scanf("%d",&m);
	
	printf("Enter your second number = ");
	scanf("%d",&n);
	
	//function calling
	my_add(m,n);
	
	printf("\n\n\n---------Substraction----------\n");
	printf("\nEnter your first number = ");
	scanf("%d",&m);
	
	printf("Enter your second number = ");
	scanf("%d",&n);
	
	//function calling
	my_sub(m,n);
	
	printf("\n\n\n---------Multiplication----------\n");
	printf("\nEnter your first number = ");
	scanf("%d",&m);
	
	printf("Enter your second number = ");
	scanf("%d",&n);
	
	//function calling
	my_mul(m,n);
	
	float a,b;
	printf("\n\n\n-----------Division------------\n");
	printf("\nEnter your first number = ");
	scanf("%f",&a);
	
	printf("Enter your second number = ");
	scanf("%f",&b);
	
	//function calling
	my_div(a,b);
	return 0;
}
//function defination
void my_add(int a,int b)
{
	printf("\nThis is your addition : %d",a+b);
}
void my_sub(int a,int b)
{
	printf("\nThis is your substraction : %d",a-b);
}
void my_mul(int a,int b)
{
	printf("\nThis is your multiplication : %d",a*b);
}
void my_div(float a,float b)
{
	printf("\nThis is your Division : %f",a/b);
}
