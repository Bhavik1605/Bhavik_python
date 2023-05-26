#include<stdio.h>
int main()
{
	int ch[20],ch1[20],ch2[20],ch3[20],ch4[20];
	
	printf("Enter your first name : ");
	scanf("%s",ch);
//	printf("\nEnter your Last name : ");
//	scanf("%s",ch1);
	printf("\nEnter your Email : ");
	scanf("%s",ch2);
	printf("\nEnter your Zip-Code : ");
	scanf("%s",ch3);
	printf("\nEnter your mobile number : ");
	scanf("%s",ch4);
	
	printf("----------YOUR_INFO----------");
	printf("\nyour first name : %s",ch);
	printf("\nyour last name : %s",ch1);
	printf("\nyour email : %s",ch2);
	printf("\nyour Zip-Code : %s",ch3);
	printf("\nyour mobile number : %s",ch4);
	return 0;
}
