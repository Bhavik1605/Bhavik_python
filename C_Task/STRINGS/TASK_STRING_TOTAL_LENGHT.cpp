#include<stdio.h>

int main()
{
	char name[20];
	int i,c=0;
	
	printf("Enter your name : ");
	gets(name);//to scan multiline string (it is work similar to scanf)
	
	printf("Your name is: %s\n\n",name);
//	puts(name); //to print the string
	
	for(i=0;name[i] != '\0';i++)
	{
		c++;
	}
	printf("The length of string : %d",c);
	return 0;
}
