//display the multiplier table vertically from 1 to n.
#include<stdio.h>
main()
{
	int a,i,j;
	printf("Enter the number for Table 1 to ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		for(j=1;j<=10;j++){
		       printf("%d * %d = %d\n",i,j,j*i);
		}
		printf("\n");
	}
}
