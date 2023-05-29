//find a string is pelidrome or not.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,l=0,a=0;
	
	printf("Enter a string : ");
	gets(str);
	
	l = strlen(str)-1;
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=str[l-i])
		{
			a=1;
			break;
		}
	}
	if(a==0)
	{
		printf("pelidrome");
	}
	else
	{
		printf("Not pelidrome");
	}
	
	
	return 0;
}
