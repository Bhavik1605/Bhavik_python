/*pattern A
          A B
          A B C
          A B C D
          A B C D E
*/
#include<stdio.h>
main()
{
	int row,col;
	char alp='A';
	for(row=0;row<=4;row++)
	{
		for(col=0;col<=row;col++)
		{
			printf("%c ",alp+col);
			
		}
		printf("\n");
	}
}
