//function task - 3 : Area finder : type - 2 : without return type & with parameter
#include<stdio.h>

//function declaration
void cir(float p);
void rec(float p,float q);
void tri(float p,float q);

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
			printf("\n\n----You choose Area of circle----");
			
			float r;
			printf("\nEnter radious of your circle : ");
			scanf("%f",&r);
			
			cir(r);
		}
		else if(a==2)
		{
			printf("\n\n----You choose Area of rectangle----");
			
			float l,b;
			printf("\nEnter lenght of your rectangle : ");
			scanf("%f",&l);
	
			printf("Enter breadth of your rectangle : ");
			scanf("%f",&b);
			
			rec(l,b);
		}
		else if(a==3)
		{
			printf("\n\n----You choose Area of triangle----");
			
			float h,ba;
			printf("\nEnter hight of your triangle : ");
			scanf("%f",&h);
	
			printf("Enter base of your triangle : ");
			scanf("%f",&ba);
			tri(h,ba);
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
void cir(float p)
{	
	printf("\nThis is your area of circle : %f",3.14*p*p);
}
void rec(float p,float q)
{
	printf("\nThis is your area of rectangle : %f",p*q);
}
void tri(float p,float q)
{
	printf("\nThis is your area of triangle : %f",(p*q)/2);
}
