#include<stdio.h>
int main()
{
	int mark[5];
	float pr;
	
	printf("Enter 1st subject marks : ");
	scanf("%d",&mark[1]);
	
	printf("Enter 2nd subject marks : ");
	scanf("%d",&mark[2]);
	
	printf("Enter 3rd subject marks : ");
	scanf("%d",&mark[3]);
	
	printf("Enter 4th subject marks : ");
	scanf("%d",&mark[4]);
	
	printf("Enter 5th subject marks : ");
	scanf("%d",&mark[5]);
	
	pr = (mark[1]+mark[2]+mark[3]+mark[4]+mark[5])/5;
	
	printf("\nYour PR is = %.2f ",pr);
	
	if(pr<0 || pr>100)
	{
		printf("\nYour marks is Incorrect!!");
	}
	
	else if(pr<=100 && pr>=80)
	{
		printf("\nCongrats!! Your grade is A...");
	}
	else if(pr>=60 && pr<80)
	{
		printf("\nYour grade is B...");
	}
	else if(pr>=40 && pr<60)
	{
		printf("\nYour grade is C...");
	}
	else if(pr>=33 && pr<40)
	{
		printf("\nYour grade is D...");
	}
	else
	{
		printf("\nSORRY!!! You are fail better luck next time...");
	}
	
	return 0;
}
