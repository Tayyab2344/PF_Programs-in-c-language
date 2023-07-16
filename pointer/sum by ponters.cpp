#include<stdio.h>

int add_pointers(int *a, int *b)
{
	int sum = *a+*b;
	printf("sum is %d",sum);
}

int main()
{
	int n1,n2;
	 printf("Enter both numbers\n");
	 scanf("%d%d",&n1,&n2);
	 add_pointers(&n1 , &n2);
	 return 0;
}
