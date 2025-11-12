#include<stdio.h>
main()
{
	int i,j;
	printf("enter the i value");
	scanf("%d",&i);
	j=(i++)+(++i);
	printf("the value of expression is %d",j);
}
