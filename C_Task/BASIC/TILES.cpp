#include<stdio.h>
main()
{
	int L1,W1,L2,W2,F1,F2,total;
	
	printf("------for 1st floor------");
	printf("\nEnter Lenght of 1st floor tiles : ");
	scanf("%d",&L1);
	printf("\nEnter Width of 1st floor tiles : ");
	scanf("%d",&W1);
	F1=L1*W1;
	printf("\nTotal tiles needed for 1st floor : %d",F1);
	
	printf("\n\n------for 2nd floor------");
	printf("\nEnter Lenght of 2nd floor tiles : ");
	scanf("%d",&L2);
	printf("\nEnter Width of 2nd floor tiles : ");
	scanf("%d",&W2);
	F2=L2*W2;
	printf("\nTotal tiles needed for 2nd floor : %d",F2);
	
	printf("\n\nAllover tiles are nedded = %d",F1+F2);
	
	printf("\n\nIn 1 Pakages we have 6 tiles than");
	total=17*6;
	printf("\n17 Pakages we get total tiles are: %d tiles",total);
	
	printf("\n\nNow total Left_over_Tiles is = %d",total-(F1+F2));
}
