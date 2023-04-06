//Program for 9 99 999 9999 .... series and sum of all terms
#include<stdio.h>
main()
{
	int i,a,sum=0,t=9;
	
	printf("Enter Your Number of terms : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		sum=sum+t;
		printf("%d ",t);
		t=(t*10)+9;
	}printf("\n\nthe sum of the series : %d",sum);
}
