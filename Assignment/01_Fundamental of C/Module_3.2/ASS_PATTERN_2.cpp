/*pattern A
          B C
          D E F
          G H I J
          K L M N O
*/
#include<stdio.h>
main()
{
	int row,col;
	char alp='A';
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c ",alp+j);
			alp++;
		}
		printf("\n");
	}
}
