#include<stdio.h>
main()
{
	float ctemp,ftemp;
	printf("enter temp in celsious");
	scanf("%f",&ctemp);
	ftemp = 1.8*ctemp + 32;
	printf("the temp in fahrenheit is %f",ftemp);
}
