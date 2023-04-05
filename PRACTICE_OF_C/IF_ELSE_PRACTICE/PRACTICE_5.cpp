#include<stdio.h>
main()
{
	//check age of candidate for vote
	int num1;
	printf("Enter the Age of Candidate : ");
	scanf("%d",&num1);
	if(num1 >= 18){
		printf("This candidate is eligible for vote.");
	}else{
		printf("This candidate is not eligible for vote.");
	}
}
