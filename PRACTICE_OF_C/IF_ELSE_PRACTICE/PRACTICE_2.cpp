#include<stdio.h>
main()
{
	//check whether a given number is even or odd
	int num1;
	printf("Enter the number : ");
	scanf("%d",&num1);
	if(num1 % 2 == 0){
		printf("This number is EVEN_NUMBER");
	}else{
		printf("This number is ODD_NUMBER");
	}
}
