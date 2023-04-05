/*pattern 1
          23
          456
          78910
*/
#include<stdio.h>
main()
{
	int i,j,a=1;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d ",a++);
		}
		printf("\n");
	}
}
