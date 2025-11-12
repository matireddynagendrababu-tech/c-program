#include<stdio.h>
main()
{
	int n1,n2;
	char op;
	printf("enter a two numbers");
	scanf("%d%d",&n1,&n2);
	printf("enter a operaters (+,-,*,/,%)");
	scanf("\n");
	scanf("%c",&op);
	switch(op)
	{
		case '+':
		printf("the sum is %d",n1+n2);
		break;
		case '-':
		printf("the difference is %d",n1-n2);
		break;
		case '*':
		printf("the multiple is %d",n1*n2);
		break;
		case '/':
		printf("the divided is %d",n1/n2);
		break;
		case '%':
		printf("the moduelo is %d",n1%n2);
		break;
		default:
			printf("invalied operator");
	}
}
