/* pattern:-
			*
		  * *	
		* * *
	  * * * *
	* * * * *  
*/



#include<stdio.h>
int main()
{
	int i,j,m;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(5-i);j++)
		{
			printf(" ");
		}
		for(m=1;m<=i;m++)//(m=1;m<=j;m++)
		{
			printf("*");    
		}
		printf("\n");
	}
	return 0;
}
