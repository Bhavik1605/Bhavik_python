//find length of string without using inbuilt function

#include<stdio.h>

int main()
{
	char str[20];
	int i,len=0;
	
	printf("Enter a String : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	
	printf("\nTotal Length of Your String is : %d",len);
	
	return 0;
}
