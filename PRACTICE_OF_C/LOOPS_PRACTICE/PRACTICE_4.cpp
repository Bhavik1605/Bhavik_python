//display the cube of the number up to an integer.
#include<stdio.h>
main()
{
	int i,a,c;
	
	printf("ENTER NUMBER OF TERMS : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		printf("Your %d Number and cube of the %d is = %d\n",i,i,i*i*i);
	}
	
}
