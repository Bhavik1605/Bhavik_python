//print any number by user using array. 
#include<stdio.h>
main()
{
	int i,a[10];
	
	printf("Enter 10 Value : ");
	for(i=0;i<10;i++){
		printf("\nElement - %d : ",i+1);
		scanf("%d",&a[i]);
	}printf("Total elements are = ");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
