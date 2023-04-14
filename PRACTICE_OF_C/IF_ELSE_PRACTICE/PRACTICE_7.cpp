#include<stdio.h>
main()
{
	char ch;
	printf("Enter Your Alphabate : ");
	scanf("%c",&ch);
	
	if(ch<='Z'){
		printf("Your %c Is Upper Case Alphabate",ch);
	}else{
		printf("Your %c Is Lower Case Alphabate",ch);
	}
	
}
