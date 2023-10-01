//basic calculator using switch case

#include<stdio.h>
main()
{
	char sign;
	int num1,num2;
	printf("Enter the Sign (+,-,*,/,m) : ");
	scanf("%c",&sign);
	printf("enter the first value : ");
	scanf("%d",&num1);
	printf("\nenter the first value : ");
	scanf("%d",&num2);
	
	switch(sign){
		case '+':
			printf("\nTotal Addition = %d ",num1+num2);
			break;
		case'-':
			printf("\nTotal Substraction = %d ",num1-num2);
			break;
		case'*':
			printf("\nTotal Multiplication = %d ",num1*num2);
			break;
		case'/':
			printf("\nTotal Division = %d ",num1/num2);
			break;
		case 'm':
			printf("\nTotal Remiender(modulo) = %d ",num1%num2);
			break;
		default:
			printf("INVALID_INPUT!!!");
			break;
	}
}
