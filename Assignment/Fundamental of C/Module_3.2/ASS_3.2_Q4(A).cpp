//program for check is your day using switch case 
#include<stdio.h>
main()
{
	int num;
	printf("Enter Your Day (1 to 7) : ");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("your day is Monday");
			break;
		case 2:
			printf("your day is Tuesday");
			break;
		case 3:
			printf("your day is Wednesday");
			break;
		case 4:
			printf("your day is Thursday");
			break;
		case 5:
			printf("your day is Friday");
			break;
		case 6:
			printf("your day is Saturday");
			break;
		case 7:
			printf("your day is Sunday");
			break;
		default:
			printf("INVALID INPUT!!!");
			break;
	}
}
