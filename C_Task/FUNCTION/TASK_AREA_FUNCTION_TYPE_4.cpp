//function task : Area finder : type - 4 : with return type & with parameter

#include<stdio.h>

float cir(float r)
{
	return 3.14*r*r;
}
float rec(float l,float b)
{
	return l*b;
}
float tri(float h,float ba)
{
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
			float r;
			printf("\nEnter radious of your circle : ");
			scanf("%f",&r);
			
			printf("\nThis is your area of circle : %f",cir(r));
		}
		else if(a==2)
		{
			float l,b;
			printf("\nEnter length of your rectangle : ");
			scanf("%f",&l);
			
			printf("Enter breadth of your rectangle : ");
			scanf("%f",&b);
			
			printf("\nThis is your area of circle : %f",rec(l,b));
			
		}
		else
		{
			float h,ba;
			printf("\nEnter hight of your triangle : ");
			scanf("%f",&h);
			
			printf("Enter base of your triangle : ");
			scanf("%f",&ba);
			
			printf("\nThis is your area of circle : %f",tri(h,ba));
		}
	}
	else
	{
		printf("\nYour input is invaid!!!");
		printf("\nThank you...");
	}
	
	return 0;
}
