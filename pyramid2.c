#include<stdio.h>
#include<stdlib.h>
int main()
{	int i,j,line,k;
	system("clear");
	printf("ENTER THE NUMBER OF LINES:");
	scanf("%d",&line);
	for(i=1;i<=line;i++)
	{	for(j=1;j<=line-i;j++)
		{	printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{	printf("*");
		}
		printf("\n");
	}
	return 0;		
}
