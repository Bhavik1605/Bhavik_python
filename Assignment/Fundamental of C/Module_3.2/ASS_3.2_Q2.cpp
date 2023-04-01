#include<stdio.h>
main()
{
	//swap number without third variable
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap value is a: %d",a);
    printf("\nAfter swap value is b: %d",b);
}
