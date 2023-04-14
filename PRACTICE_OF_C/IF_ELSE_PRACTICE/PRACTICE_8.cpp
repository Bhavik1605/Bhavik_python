//program for four value check to which is BIGGER

#include<stdio.h>
main()
{
	int num1,num2,num3,num4;
	
	printf("\nEnter Your First Value : ");
	scanf("%d",&num1);
	printf("\nEnter Your Second Value : ");
	scanf("%d",&num2);
	printf("\nEnter Your Third Value : ");
	scanf("%d",&num3);
	printf("\nEnter Your Forth Value : ");
	scanf("%d",&num4);
	
	if(num1>num2){
		if(num1>num3){
			if(num1>num4){
				printf("\n%d is BIGGER",num1);
			}
		}
	}else if (num2>num3){
		if(num2>num4){
			printf("\n%d is BIGGER",num2);
		}
	}else if(num3>num4){
		printf("\n%d is BIGGER",num3);
	}
	else{
		printf("\n%d is BIGGER",num4);
	}
}
