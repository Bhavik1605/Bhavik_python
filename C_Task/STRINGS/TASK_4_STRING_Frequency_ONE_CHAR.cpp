#include<stdio.h>
int main()
{
	char str[40],ch;
	int i,c=0;
	
	//for take input from user
	printf("Enter your string : ");
	gets(str);
	
	printf("Enter character : ");//Enter character from above string
	scanf("%c",&ch);
	
	for(i=0;str[i] !='\0';i++)
	{
		if(str[i]==ch)
		{
			c++;
		}
	}
	printf("Frequency of Character in string : %d",c);
	return 0;
}
