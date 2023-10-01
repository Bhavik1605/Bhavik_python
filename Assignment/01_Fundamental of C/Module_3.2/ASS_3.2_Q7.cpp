//generate the table of a given number using for loop

#include<stdio.h>
main()
{
	int i,num;
	printf("Enter Your Table Number : ");
	scanf("%d",&num);//take only positive number
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",num,i,i*num);
	}
}
