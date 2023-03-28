#include<stdio.h>
main()
{
	//area of circle
	printf("(1) Area of Circle");
	float Pi=3.14,Redious;
	
	printf("\nEnter Redious of Circle = ");
	scanf("%f",&Redious);
	
	printf("The Area of Circle = %f",Pi*Redious*Redious);
	
	//area of rectangle
	printf("\n\n(2) Area of Rectangle");
	int length,breadth;
	
	printf("\nEnter length of rectangle = ");
	scanf("%d",&length);
	
	printf("Enter breaadth of rectangle = ");
	scanf("%d",&breadth);

		
	printf("The Area of Rectangle = %d",length*breadth);	
	
	//area of triangle
	printf("\n\n(3) Area of Triangle");
	float Base,Hight,Area_of_Triangle;
	
	printf("\nEnter Base of Triangle = ");
	scanf("%f",&Base);
	
	printf("Enter Hight of Triangle = ");
	scanf("%f",&Hight);

	Area_of_Triangle = Base*Hight / 2;	
	printf("The Area of Triangle = %f",Area_of_Triangle);	
}
