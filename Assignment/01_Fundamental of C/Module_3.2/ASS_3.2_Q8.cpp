//program for any number of factorial

#include<stdio.h>
main()
{
	int i,num,f=1;
	printf("Enter your number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		f=f*i;   
	}
	printf("total factorial of Your : %d",f);
}
