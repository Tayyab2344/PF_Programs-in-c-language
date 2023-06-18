#include<stdio.h>

int main()
{
	int i,j;
	int num;
	
	printf("nter number of rows:");
	scanf("%d",&num);
	
	int space = num/2+1;
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			if(j==space || j == num-space+1 )
			{
				printf("*");
			}
			else{
			printf(" ");
    }
		}
		if(i<=num/2)
		space--;
		else
		space++;
		printf("\n");
	}
}
