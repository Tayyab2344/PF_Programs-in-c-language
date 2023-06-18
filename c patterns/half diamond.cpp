#include<stdio.h>

int main()
{
	int i,j;
	int num;
	
	printf("nter number of rows:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num*2-1;j++)
		{
			if(j>=(num+1)-i && j<=(num-1)+i)
			{
				printf("*");
			}
			else{
			printf(" ");
    }
		}
		printf("\n");
	}
}
