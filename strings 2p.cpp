#include<stdio.h>
main()
{
	char n[20];
	printf("enter your name");
	scanf("%[^\n]s",n);
	printf("my name is %s",n);
}
