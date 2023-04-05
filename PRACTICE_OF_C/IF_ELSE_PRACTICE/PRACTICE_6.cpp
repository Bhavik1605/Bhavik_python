#include<stdio.h>
main()
{
	 //check whether given value is positive,zero and negative
	int num1;
	printf("Enter The Number : ");
	scanf("%d",&num1);
	if(num1 > 0){
		printf("The Value of n : 1");//if given value is positive
	}else if(num1 == 0){
		printf("The Value of n : 0");//if given value is zero
	}else if(num1 < 0){
		printf("The Value of n : -1");//if given value is negative
	}
}
