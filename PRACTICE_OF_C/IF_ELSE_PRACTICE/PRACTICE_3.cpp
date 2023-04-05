#include<stdio.h>
main()
{
	//check whether a given number is positive or negative
	int num1;
	printf("Enter the number : ");
	scanf("%d",&num1);
	if(num1 >= 0){
		printf("This number is Positive Number");
	}else{
		printf("This number is Negative Number");
	}
}
