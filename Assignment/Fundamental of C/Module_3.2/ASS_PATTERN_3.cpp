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
	//	for(m=j;m<=(2*j-1);m++)
		for(m=1;m<=(2*i)-1;m++)
		{
			printf("*");    //space then piramid
		}
		printf("\n");
	}
	return 0;
}
