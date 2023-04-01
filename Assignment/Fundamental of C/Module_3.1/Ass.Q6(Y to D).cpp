#include<stdio.h>
main()
{
	float Year,Days;
	printf("Enter the Year : ");
	scanf("%f",&Year);
	printf("Total Days : %f",Year*365);
	
	printf("\nEnter the Days : ");
	scanf("%f",&Days);
	printf("Total Year : %f",Days/365);
}
