//find length of string without using string functionality

#include<stdio.h>
int main()
{
	char str[20];
	int i,l=0;
	
	printf("Enter a string : ");
	gets(str);
	
	for(i=0;str[i] != '\0';i++)
	{
		l++;
	}
	
	printf("Total length of your string : %d",l);
	
	return 0;
}
