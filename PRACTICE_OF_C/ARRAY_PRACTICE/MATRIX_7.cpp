#include<stdio.h>
main()
{
	int m1[3][3],i,j;
	printf("------matrix-1--------\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("Enter your value %d%d = ",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}printf("\n");
	}
	    for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				printf("%d \t",m1[i][j]);
			}printf("\n");
		}
	printf("------matrix-2--------\n");
	int m2[i][j];
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("Enter your value %d%d = ",i,j);
			scanf("%d",&m2[i][j]);
		}printf("\n");
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d \t",m2[i][j]);
		}printf("\n");
	}
	printf("------Addition of matrix-1 and matrix-2--------\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d \t",m1[i][j]+m2[i][j]);
		}printf("\n");
	}
}
