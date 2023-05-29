//to check number is even or odd

#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	//ternury operator 
	(n%2==0)?printf("%d number is even",n):printf("%d number is odd",n);
	
	return 0;
}
