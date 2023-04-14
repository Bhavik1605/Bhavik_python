#include<stdio.h>
main()
{
	int a,i,num[100],sum=0;
	printf("Input number of input : ");
	scanf("%d",&a);
	
	printf("\nInput %d Element in the array : ",i+1);
	for(i=0;i<a;i++){
		printf("\nElement %d : ",i);
		scanf("%d",&num[i]);
		sum+=num[i];
		
	}
	printf("\nSum of all elements are : %d",sum);
}
