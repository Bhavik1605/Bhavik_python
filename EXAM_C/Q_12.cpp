//Recursive function : this function is itself calling again and again 

//program to find factoral of any number using recursive function

#include<stdio.h>

//function decalaration and defination
double fact(int a)
{
	if(a==0)
	{
		return 1;
	}
		
	return a*fact(a-1);
}

int main()
{
	int n;
	
	//take input from user 
	printf("Enter any number to find factorial : ");
	scanf("%d",&n);

	printf("The factorial of %d number is : %lf",n,fact(n));//function calling
	return 0;
}
