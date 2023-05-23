#include<stdio.h>
int main()
{
	int a,i;
	char choice;
	
	do
	{
		printf("Enter integer number : ");
		scanf("%d",&a);
		if(a == 0)
		{
			printf("your number is Zero.");
		}
		else if(a>=0)
		{
			printf("your number is positive.");
		}
		else
		{
			printf("Your number is negative.");
		}
		
		printf("\n\nwhat to check again (press 'Y' for yes & 'N' for no) : ");
		scanf("%s",&choice);
	}
	while(choice=='Y' || choice=='y');
	if (choice=='n' || choice=='N')
	{
		printf("\nBYE!! BYE!!!");
	}
	else{
		printf("\nINVALID INPUT");
	}
	
	return 0;
}
