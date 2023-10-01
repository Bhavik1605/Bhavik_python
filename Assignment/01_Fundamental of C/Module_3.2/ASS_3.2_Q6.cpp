//How many Even & Odd numbers are there and sum of even no. and odd numbers.

#include<stdio.h>
main()
{
	int i,num,o=0,e=0,sumofeven,sumofodd;
	for(i=1;i<=10;i++)
	{
		printf("\nEnter your Number : ");
		scanf("%d" ,&num);
		if(num % 2 == 0)
		{
			printf("Your Number is Even.");
			e++;                 //if number is even than e++ count 
			sumofeven+=num;      //if number is even than number is store
		}else
		{
			printf("Your Number is Odd.");
			o++;                 //if number is odd than o++ count 
			sumofodd+=num;       //if number is odd than number is store
		}
	}
	    printf("\nTotal Even Number is = %d \n",e);
		printf("Total Odd Number is = %d \n",o);
		printf("Total Sum of Even Number = %d \n",sumofeven);
		printf("Total Sum of Odd Number = %d \n",sumofodd);
}
