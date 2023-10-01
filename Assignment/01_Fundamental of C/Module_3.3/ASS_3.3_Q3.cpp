//print reverse string using recursion

#include<stdio.h>
#include<string.h>

//function decalartion & defination
void rev(char str[],int i,int ln)
{
	char temp;
	
	temp = str[i];
	str[i]=str[ln-i];
	str[ln-i]=temp;
	
	if(i == ln/2)
	{
		return;
	}
	
	rev(str,i+1,ln);
}

int main()
{
	char str[20];
	int ln;	
	
	//take input from user
	
	printf("Enter a string : ");
	gets(str);
	
	ln = strlen(str)-1;//find length of string
	
	rev(str,0,ln);//function calling
	
	printf("Reverse string is : %s",str);
	
	return 0;
}
