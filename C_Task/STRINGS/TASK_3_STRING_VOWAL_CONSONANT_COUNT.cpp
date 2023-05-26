#include<stdio.h>

int main()
{
	char name[80];
	int i,c=0,v=0,s=0;
	
	printf("Enter your name : ");
	gets(name);//to scan multiline string (it is work similar to scanf)
	
	printf("Your name is: ");
	puts(name); //to print the string
	
	for(i=0;name[i] != NULL ;i++)
	{
		if(name[i]=='A' || name[i]=='E' ||name[i]=='I' ||name[i]=='O' ||name[i]=='U' || name[i]=='a' || name[i]=='e' ||name[i]=='i' ||name[i]=='o' ||name[i]=='u')
		{
			v++;
		}
		else if(name[i] == ' ')
		{
			s++;
		}
		else
		{
			c++;
		}
	}
	printf("Number of Vowal are : %d",v);
	printf("\nNumber of Consonant are : %d",c);
	printf("\nNumber of Blank Spaces are : %d",s);
	return 0;
}
