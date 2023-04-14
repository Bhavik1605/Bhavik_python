//first array is copy in second array
#include<stdio.h>
main()
{
	int i,a[100],n;
	printf("Input the number of elements : ");
	scanf("%d",&n);
	printf("\nInput %d elements of the array = \n",n);
	for(i=0;i<n;i++){
		printf("ELEMENT NO.%d:  ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nThe Elements stored in the first array = ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nThe Elements copied into the second array = ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
