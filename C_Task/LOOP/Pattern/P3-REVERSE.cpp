/* pattern:-
	* * * * *
	  * * * *  
	    * * *
	      * *
	        *
*/
#include<stdio.h>
int main()
{
	int i,j,m;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=(5-i);j++)
		{
			printf(" ");
		}
		for(m=1;m<=i;m++)
		{
			printf("*");    
		}
		printf("\n");
	}
	return 0;
}
