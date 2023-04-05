//display the n terms of odd natural numbers and their sum.
#include<stdio.h>
main()
{
	int a,i,sum=0;
	printf("Enter Your number of terms : ");
	scanf("%d",&a);
	printf("YOUR ODD NUMBERS ARE = ");
	for(i=1;i<=a;i++){
		printf(" %d",(2*i)-1);
		sum=sum+(2*i)-1;
	}
	printf("\nTOTAL SUM OF YOUR ODD NUMBERS = %d",sum);
}
