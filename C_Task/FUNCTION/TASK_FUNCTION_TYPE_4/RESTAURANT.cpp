#include<stdio.h>
int piz(int q) //function - 1 : declaration & defination
{
	int pri,amt;
	printf("\nYour item is : Pizza");
	printf("\nEnter quantity : ");
	scanf("%d",&q);
	pri = 90 * q;
	return pri;
}
int bur(int q) //function - 2 : declaration & defination
{
	int pri,amt;
	printf("\nYour item is : Burger");
	printf("\nEnter quantity : ");
	scanf("%d",&q);
	pri = 89 * q;
	return pri;
}
int paa(int q) //function - 3 : declaration & defination
{
	int pri,amt;
	printf("\nYour item is : Paani-Puri");
	printf("\nEnter quantity : ");
	scanf("%d",&q);
	pri = 100 * q;
	return pri;
}
int dos(int q) //function - 4 : declaration & defination
{
	int pri,amt;
	printf("\nYour item is : Dosa");
	printf("\nEnter quantity : ");
	scanf("%d",&q);
	pri = 80 * q;
	return pri;
}

//main function
int main()
{
	int q,n,amt,total;
	char ch;
	
	do
	{
		printf("\n============= Welcome to TOPS Restaurant ===============\n\n");
		
		printf("Sr_no.    Item         Price\n");
		printf("  1.      Pizza        90/-\n");
		printf("  2.      Burger       89/-\n");
		printf("  3.      Pani-puri    100/-\n");
		printf("  4.      Dosa         80/-\n");
		
		printf("\n\nEnter your Choice : ");
		scanf("%d",&n);
		
		if(n==1)
		{
			amt = piz(q); //calling function - 1
	        printf("\nTotal Price = %d",amt);
	        total = total + amt;
		}
		else if(n==2)
		{
			amt = bur(q); //calling function - 1
	        printf("\nTotal Price = %d",amt);
	        total = total + amt;
		}
		else if(n==3)
		{
			amt = paa(q); //calling function - 1
	        printf("\nTotal Price = %d",amt);
	        total = total + amt;
		}
		else if(n==4)
		{
			amt = dos(q); //calling function - 1
	        printf("\nTotal Price = %d",amt);
	        total = total + amt;
		}
		else
		{
			printf("\nYour choice is incorrect");
		}
		printf("\n\nDo you want Anything else ? y & n : ");
		scanf("%s",&ch);
	}
	while(ch=='y' || ch=='Y');
	if(ch=='n' || ch=='N')
	{
		printf("\n\nThank you very much");
		printf("\nYour total bill is : %d",total);
	}
	else
	{
		printf("\nYour Input are not y & n!!!");
	}
	return 0;
}
