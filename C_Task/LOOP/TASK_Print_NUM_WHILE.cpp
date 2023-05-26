//WAP to print 1 to 10 number using while loop

#include<stdio.h>
int main()
{
	int ch[20];
	int age;
	char choice;
	bool c=true;
	
	while(c)
	{
	printf("Enter your name : ");
	scanf("%s",ch);
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	fflush(stdin);//will release privious memory allocation and accept next std input
	printf("do you want to continue ? y and n :");
	scanf("%c",&choice);
	
	if(choice == 'y' || choice =='Y')
	{
		c=true;
	}
	else
	{
		printf("thank you !!");
		c=false;
	}
}
	return 0;
}

