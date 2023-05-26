//Increment ,operator
#include<stdio.h>
int main()
{
	int num1=12,num2=3;
	
	num1=num1+10;
	num2=++num1;
	num1--;
	--num2;
	num2=num1+10;
	
	printf("After all operation final value of num1 : %d",num1);
	printf("\nAfter all operation final value of num2 : %d",num2);
	
	return 0;
}
