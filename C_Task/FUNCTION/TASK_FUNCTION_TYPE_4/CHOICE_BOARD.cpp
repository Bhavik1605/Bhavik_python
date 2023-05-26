//print choice board & perform specific task by choice of user  using function.

#include<stdio.h>

float sum(float a,float b) //function : 1 : declaration & defination
{
	printf("Enter your First value : ");
	scanf("%f",&a);
	printf("Enter your Second value : ");
	scanf("%f",&b);
	
	return a+b;
}

float sub(float a,float b) //function : 2 : declaration & defination
{
	printf("Enter your First value : ");
	scanf("%f",&a);
	printf("Enter your Second value : ");
	scanf("%f",&b);
	
	return a-b;
}
float mul(float a,float b) //function : 3 : declaration & defination
{
	printf("Enter your First value : ");
	scanf("%f",&a);
	printf("Enter your Second value : ");
	scanf("%f",&b);
	
	return a*b;
}
float div(float a,float b) //function : 4 : declaration & defination
{
	printf("Enter your First value : ");
	scanf("%f",&a);
	printf("Enter your Second value : ");
	scanf("%f",&b);
	
	return a/b;
}
int mod(int a,int b) //function : 5 : declaration & defination
{
	printf("Enter your First value : ");
	scanf("%d",&a);
	printf("Enter your Second value : ");
	scanf("%d",&b);
	
	return a%b;
}

int main()  //main function
{
	
	char ch;
	
	do
	{
		
		printf("\n=============Choice_Board===============\n\n");
		printf("1. Addition\n");
		printf("2. Sub-straction\n");
		printf("3. Multi-plication\n");
		printf("4. Division\n");
		printf("5. Modulo\n");
		printf("6. Exit\n");
		
		int a,b,n;
		printf("\nEnter your Choice : ");
		scanf("%d",&n);
		
		if(n == 1)
		{
			printf("\n-----Your Choice : Addition------\n");
			printf("\nYour Addition is : %f",sum(a,b));       //calling
		}
		else if(n == 2)
		{
			printf("\n-----Your Choice : Sub-straction------\n");
			printf("\nYour Sub-straction is : %f",sub(a,b));		//calling
		}
		else if(n == 3)
		{
			printf("\n-----Your Choice : Multi-plication------\n");
			printf("\nYour Multi-plication is : %f",mul(a,b));	//calling
		}
		else if(n == 4)
		{
			printf("\n-----Your Choice : Division------\n");
			printf("\nYour Division is : %f",div(a,b));		//calling
		}
		else if(n == 5)
		{
			printf("\n-----Your Choice : Modulo------\n");
			printf("\nYour Modulo is : %d",mod(a,b));		//calling
		}
		else if(n == 6)
		{
			printf("\n-----You choose Exit option------\n"); 
			return 0;
		}
		else
		{
			printf("\nINVALID_INPUT!!!");
		}
		
		printf("\n\nDo You Want to Continue ? [Press : 'y/n'] : ");
		scanf("%s",&ch);
		
	}while(ch=='y' || ch=='Y');
	
	if(ch=='n' || ch=='N')
	{
		printf("\nThank you Very Much...");
	}
	else
	{
		printf("\nYou Choose INVALID Character!!!");
	}

	return 0;
}

