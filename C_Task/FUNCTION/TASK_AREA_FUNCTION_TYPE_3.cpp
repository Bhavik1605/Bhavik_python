//function task : Area finder : type - 3 : with return type & without parameter

#include<stdio.h>
//function declaration & defination
float cir()
{
	float r;
	
	printf("\n\n----You choose Area of circle----");
	
	printf("\n\nEnter radious of your circle : ");
	scanf("%f",&r);
	
	return 3.14*r*r;
}
float rec()
{
	float l,b;
	
	printf("\n\n----You choose Area of rectangle----");
	
	printf("\n\nEnter length of your rectangle : ");
	scanf("%f",&l);
	
	printf("Enter breadth of your rectangle : ");
	scanf("%f",&b);
	
	return l*b;
}
float tri()
{
	float h,ba;
	
	printf("\n\n----You choose Area of triangle----");
	
	printf("\n\nEnter hight of your triangle : ");
	scanf("%f",&h);
	
	printf("Enter base of your triangle : ");
	scanf("%f",&ba);
	
	return (h*ba)/2;
}
int main()
{
	int a;
	printf("=========>Area_Finder<=========");
	printf("\n\n(1)Area of Circle");
	printf("\n(2)Area of Rectangle");
	printf("\n(3)Area of Triangle");
	
	printf("\n\nChoose any number of the above to Find Area : ");
	scanf("%d",&a);
	
	if(a==1 || a==2 || a==3)
	{
		if(a==1)
		{
			printf("\nThis is your area of circle : %f",cir());//calling
		}
		else if(a==2)
		{
			printf("\nThis is your area of rectangle : %f",rec());//calling
		}
		else
		{
			printf("\nThis is your area of triangle : %f",tri());//calling
		}
	}
	else
	{
		printf("\nYour input is invalid!!!");
		printf("\nThank you...");
	}
	
	return 0;
}

