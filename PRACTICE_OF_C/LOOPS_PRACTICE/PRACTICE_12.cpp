//Prograam for 1 + 11 + 111 +.... series and sum of all terms
#include<stdio.h>
main()
{
	int i,a,t=1,sum=0;
	printf("Enter your number of terms : ");
	scanf("%d",&a);

	for(i=1;i<=a;i++){
		 printf("%d ",t);
		 if(i<a)
		 {
		 	printf(" + ");
		 }
		 sum=sum+t;
		 t=(t*10)+1;
		}
		printf("\n\nThe sum of the series : %d",sum);
}

