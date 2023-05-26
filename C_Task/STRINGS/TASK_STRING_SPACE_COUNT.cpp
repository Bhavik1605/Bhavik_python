#include<stdio.h>

int main()
{
	char name[20];
	int i,c=0,s=0;
	
	printf("Enter your name : ");
	gets(name);//to scan multiline string (it is work similar to scanf)
	
	printf("Your name is: ");
	puts(name);

	
	for(i=0;name[i] != '\0';i++)
	{
		if(name[i] == ' ')
		{
			s++;
		}
		else
		{
			c++;
		}
	}
	printf("Length of Character : %d",c);
	printf("\nLength of Space : %d",s);
	return 0;
}
