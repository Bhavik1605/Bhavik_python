#include<stdio.h>
main()
{
	//Two Number is Equal or Not
	int num1,num2;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	if(num1 == num2){
		printf("They are number is EQUAL");
	}else{
		printf("They are number is NOT_EQUAL");
	}
}