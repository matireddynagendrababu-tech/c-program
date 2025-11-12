#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,si,ci;
	printf("enter principle amount (p)");
	scanf("%f",&p);
	printf("enter tme in a year(t)");
	scanf("%f",&t);
	printf("enter rate of interest(r) in percentage");
	scanf("%f",&r),
	si = p*r*t/100;
	ci = p*pow((1+r/100),t)-r;
	printf("simple interest is %0.2f\n",si);
	printf("compound interest is %0.1f",ci);
}
