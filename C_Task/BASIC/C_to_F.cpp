#include<stdio.h>
main()
{
	float C,F;
	
	printf("--------Convert Celsius to Fahrenheit--------\n");
	printf("Enter the Temparature in Celsius : ");
    scanf("%f",&C);
    F = (1.8 * C) + 32;
    printf("\nTemparature in Fahrenhit : %f\n",F);
    
    printf("--------Convert Celsius to Fahrenheit--------\n");
    printf("Enter the Temparature in Fahrenheit : ");
    scanf("%f",&F);
    C = ((F-32)*5)/9;
    printf("\nTemparature in Celsius : %f\n",C);
}
