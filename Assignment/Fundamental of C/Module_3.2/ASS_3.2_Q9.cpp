//program for fibonaci series

#include<stdio.h>
main()
{
	int i,num,a=0,b=1,c;
	
	printf("Enter your value : ");
	scanf("%d",&num);
	
	printf("\n%d,%d,",a,b);//because first two integer always 0,1
	for(i=2;i<num;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d,",c);
	}
	
}
