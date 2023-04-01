//Check whether Alphabate is vowal or consonant

#include<stdio.h>
main()
{
	char a;
	printf("Enter the alphabate : ");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'a':
			printf("Your alphabate is Vowal");
			break;
		case 'e':
			printf("Your alphabate is Vowal");
			break;
		case 'i':
			printf("Your alphabate is Vowal");
			break;
		case 'o':
			printf("Your alphabate is Vowal");
			break;
		case 'u':
			printf("Your alphabate is Vowal");
			break;
		default:
			printf("Your alphabate is Consonant");
			break;
	}
}
