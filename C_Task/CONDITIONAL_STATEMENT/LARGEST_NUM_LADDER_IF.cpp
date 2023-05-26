/*(3) ladder if..else use for multipal condition check.
  (4) nested if::in this type one if..else and another if..else is in this.
*/
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	
	printf("Enter your first number = ");
	scanf("%d",&num1);
	printf("Enter your second number = ");
	scanf("%d",&num2);
	printf("Enter your third number = ");
	scanf("%d",&num3);

	if(num1 != num2 || num2 != num3 || num3 != num1)
	{

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("\n%d is the largest number.", num1);
        }
        else
        {
            printf("\n%d is the largest number.", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("\n%d is the largest number.", num2);
        }
        else
        {
            printf("\n%d is the largest number.", num3);
        }
    }
	}
	else
	{
		printf("\nYour all numbers are same!!!");
	}
	return 0;
}
