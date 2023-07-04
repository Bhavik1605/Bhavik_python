#include<stdio.h>
int main()
{
	int num,quantity;
	float pri,amt,total;
	char ch;
	
	while(1)
	{
	printf("---------------Menu---------------");
	printf("\n1.Pizza          price = 180rs/pcs");
	printf("\n2.Burger         price = 100rs/pcs");
	printf("\n3.Dosa           price = 120rs/pcs");
	printf("\n4.Idli           price = 50rs/pcs");
	
	printf("\nplease enter your choose... : ");
	scanf("%d",&num);
	
	if(num >= 0 )
	{
		if(num == 1){
			printf("\nYou have selected Pizza.");
			printf("\n\nEnter  the quantity : ");
	        scanf("%d",&quantity);
			pri = 180;
			amt = pri * quantity;
	        printf("\nAmount = %.2f",amt);
	     	total = total + amt;
	        printf("\nTotal Amount is = %.2f\n",total);
		}
		else if(num == 2){
			printf("\nYou have selected Burger.");
			printf("\n\nEnter  the quantity : ");
	        scanf("%d",&quantity);
			pri = 100;
			amt = pri * quantity;
	        printf("\nAmount = %.2f",amt);
	     	total = total + amt;
	        printf("\nTotal Amount is = %.2f\n",total);
		}
		else if(num == 3){
			printf("\nYou have selected Dosa.");
			printf("\n\nEnter  the quantity : ");
	        scanf("%d",&quantity);
			pri = 120;
			amt = pri * quantity;
	        printf("\nAmount = %.2f",amt);
	     	total = total + amt;
	        printf("\nTotal Amount is = %.2f\n",total);
		}
		else if(num == 4){
			printf("\nYou have selected Idli.");
			printf("\n\nEnter  the quantity : ");
	        scanf("%d",&quantity);
			pri = 50;
			amt = pri * quantity;
	        printf("\nAmount = %.2f",amt);
	     	total = total + amt;
	        printf("\nTotal Amount is = %.2f\n",total);
	    }
		else{
			printf("\nINVALID_INPUT!!!!!!");
		}
	}
	
	printf("\nDo you want place more orders ? y & n :");
	scanf("%s",&ch);
	if (ch=='n')
	{
		return 0;
	}
	}
}
