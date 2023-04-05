//SUM OF NATURAL NUMBER AND DISPLAY n NUMBER OF NATURAL NUMBER
#include<stdio.h>
main()
{
	int i,a,sum=0;
	printf("Enter value for natural number : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		printf("%d ",i);
		sum = sum+i;
	}
	printf("\nTotal sum of first %d natural numbers is : %d",a,sum);
}
