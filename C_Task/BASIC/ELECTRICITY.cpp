#include<stdio.h>
main()
{
	float p1,p2,p3;
	
	printf("Enter your 1st month electricity bill : ");
	scanf("%f",&p1);
	printf("\nEnter your 2nd month electricity bill : ");
	scanf("%f",&p2);
	printf("\nEnter your 3rd month electricity bill : ");
	scanf("%f",&p3);
	printf("\nYour Total Average Electricity Bill : %f",(p1+p2+p3)/3);
}
