#include<stdio.h>

int main()
{
	char name[80];
	int i,c=0,s=0,n=0;
	
	printf("Enter your name : ");
	gets(name);//to scan multiline string (it is work similar to scanf)
	
	printf("Your name is: ");
	puts(name); //to print the string
	
	for(i=0;name[i] != '\0';i++)
	{
		if(name[i] == ' ')
		{
			s++;
		}
		else if(name[i]>='0' && name[i]<='9')
		{
			n++;
		}
		else
		{
			c++;
		}
	}
	printf("Number of Characters are : %d",c);
	printf("\nNumber of Blank Spaces are : %d",s);
	printf("\nNumber of Digits are : %d",n);
	return 0;
}
