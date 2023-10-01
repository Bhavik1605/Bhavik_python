//print reverse a string and check that the string is palindrome or not

#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	int ln=0,i;
	printf("Enter a String : ");
	gets(str);
	
	ln = strlen(str)-1;
	
	//logic of reverse string without use function
	printf("\nThe Reverse String is : ");
	for(i=ln;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	
	//logic of your string is pelidrome or not.
	int a=0;
	
	for(i=0;i<ln;i++)
	{
		if(str[i] != str[ln-i])
		{
			a=1;
			break;
		}
	}
	if(a==1)
	{
		printf("\n\nYour String is Not Pelidrome.");
	}
	else
	{
		printf("\n\nYour String is Pelidrome.");
	}
	return 0;
}
