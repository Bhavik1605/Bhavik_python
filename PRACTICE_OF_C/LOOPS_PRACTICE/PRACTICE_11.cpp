//display the sum of n terms of even natural numbers.
#include<stdio.h>
main()
{
	int i,a,sum=0;
	printf("Enter your number of terms : ");
	scanf("%d",&a);
	
	printf("The Even Numbers are : ");
	for(i=1;i<=a;i++){
		printf(" %d",2*i);
		sum=sum+(2*i);
	}
	printf("\n\nTotal sum of your even numbeers = %d ",sum);
}
