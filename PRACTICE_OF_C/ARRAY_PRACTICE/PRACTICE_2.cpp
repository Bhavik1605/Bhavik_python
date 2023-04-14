#include<stdio.h>
main()
{
	int i,num[100],a;
	printf("Input the number of elements to store in the array :");
	scanf("%d",&a);
	
	printf("Enter %d Number of element in the array : ",a);
	
	for(i=0;i<a;i++){
		printf("\nELEMENT-%d : ",i+1);
		scanf("%d",&num[i]);
	}
	printf("The Value Store in the array is = ");
	for(i=0;i<a;i++){
		printf("%d ",num[i]);
	}
	printf("\nThe store value reverse in the array = ");
	for(i=i-1;i>=0;i--){
		printf("%d ",num[i]);
	}
}
