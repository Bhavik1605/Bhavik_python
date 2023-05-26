//function task - 3 : Area finder : type - 1 : without return type & without parameter
#include<stdio.h>

//function declaration
void cir();
void rec();
void tri();

int main()
{
	int a;
	printf("=========> Area Finder <=========");
	printf("\n\n(1) Area of Circle");
	printf("\n(2) Area of Rectangle");
	printf("\n(3) Area of Triangle");
	
	printf("\n\nChoose any number of the above to Find Area : ");
	scanf("%d",&a);
	
	if(a==1 || a==2 || a==3)
	{
		if(a==1)
		{
			printf("\n\n----You choose Area of circle----");
			cir();
		}
		else if(a==2)
		{
			printf("\n\n----You choose Area of rectangle----");
			rec();
		}
		else
		{
			printf("\n\n----You choose Area of triangle----");
			tri();
		}	
	}
	else
	{
		printf("\nYour number is INVALID!!!");
		printf("\nThank you..");
	}
	
	return 0;
}
//function defination
void cir()
{
	float r;
	printf("\nEnter radious of your circle : ");
	scanf("%f",&r);
	
	printf("\nThis is your area of circle : %f",3.14*r*r);
}
void rec()
{
	float l,b;
	printf("\nEnter lenght of your rectangle : ");
	scanf("%f",&l);
	
	printf("Enter breadth of your rectangle : ");
	scanf("%f",&b);
	printf("\nThis is your area of rectangle : %f",l*b);
}
void tri()
{
	float h,ba;
	printf("\nEnter hight of your triangle : ");
	scanf("%f",&h);
	
	printf("Enter base of your triangle : ");
	scanf("%f",&ba);
	printf("\nThis is your area of triangle : %f",(h*ba)/2);
}
