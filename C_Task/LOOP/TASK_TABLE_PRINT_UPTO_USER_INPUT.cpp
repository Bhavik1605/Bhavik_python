#include<stdio.h>
int main()
{
	int a,i,j;
	
	printf("Enter no. of terms upto print table 1 to ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		printf("________TABLE NO: %d_________\n\n",i);
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d",i,j,i*j);
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
