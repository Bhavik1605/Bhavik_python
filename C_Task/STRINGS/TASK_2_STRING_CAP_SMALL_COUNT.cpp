#include<stdio.h>

int main()
{
	char name[80];
	int i,c=0,s=0;
	
	printf("Enter your name : ");
	gets(name);//to scan multiline string (it is work similar to scanf)
	
	printf("Your name is: ");
	puts(name); //to print the string
	
	for(i=0;name[i] != '\0';i++)
	{
		if(name[i]>='A' && name[i]<='Z')
		{
			c++;
		}
		else if(name[i]>='a' && name[i]<='z')
		{
			s++;
		}
	}
	printf("Number of Capital Letters are: %d",c);
	printf("\nNumber of Small Letters are: %d",s);
	return 0;
}
