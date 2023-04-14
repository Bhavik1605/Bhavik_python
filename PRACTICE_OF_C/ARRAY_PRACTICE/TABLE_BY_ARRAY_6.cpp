#include<stdio.h>
main()
{
	int i,j,a,num[100];
	printf("enter number of terms : ");
	scanf("%d",&a);
	
	printf("\nEnter your all %d table number : ",a);
	for(i=0;i<a;i++){
		printf("\nEnter your %d table no: ",i+1);
		scanf("%d",&num[i]);
	}
	printf("\nYour all table is : ");
	for(i=0;i<a;i++){
		printf("%d  ",num[i]);
	}printf("\n");
	for(i=0;i<a;i++){
		printf("-------------TABLE No: %d--------------\n",num[i]);
		for(j=1;j<=10;j++){
			printf("%d * %d = %d\n",num[i],j,num[i]*j);
		}printf("\n");
	}
}
