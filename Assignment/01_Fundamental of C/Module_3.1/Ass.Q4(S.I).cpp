#include<stdio.h>
main()
{
	//Simple Interest Program
	float Principal,Rate,Time,Simple_Interest;
	
	printf("Enter The Principal : ");
	scanf("%f",&Principal);
	
	printf("Enter The Rate : ");
	scanf("%f",&Rate);
	
	printf("Enter The Time : ");
	scanf("%f",&Time);
	
	Simple_Interest = Principal*Rate*Time / 100;
	
	printf("The Simple Interest = %f",Simple_Interest);
}
