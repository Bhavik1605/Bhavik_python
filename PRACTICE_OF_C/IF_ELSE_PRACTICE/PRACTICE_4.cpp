#include<stdio.h>
main()
{
	int ph,ch,ma;
	float total;
	
	printf("Enter Physics Marks = ");
	scanf("%d" ,&ph);
	
	printf("Enter Chemestry Marks = ");
    scanf("%d",&ch);
    
    printf("Enter Maths Marks = ");
    scanf("%d",&ma);
    
    total = (ph + ch + ma)/3;
    
    if((total<40) || (ph<33) || (ch<33) || (ma<33))
	{
		printf("\nYOUR PERCENTAGE IS %.2f AND YOU ARE FAIL!!!",total);
	}else
	{
		printf("\nCONGRESS YOUR PERCENTAGE IS %.2f AND YOU ARE PASS.",total);
	}
}

