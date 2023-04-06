//displays the n terms of square natural numbers and their sum.
#include<stdio.h>
main()
{
	int a,i=1,sum=0;
	printf("Input the number of terms : ");
	scanf("%d",&a);
	printf("The square natural upto %d terms are : ",a);
	while(i<=a)
	{
		printf("%d ",i*i);
		sum=sum+(i*i);
		i++;
	}
	printf("\n\nThe Sum of Square Natural Number upto %d terms : %d ",a,sum);
}
