#include<stdio.h>
main()
{
	int a,b,c,max;
	printf("enter the a,b,and c values");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("the max number is %d",max);
}
