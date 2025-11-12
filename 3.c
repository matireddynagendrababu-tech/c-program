#include<stdio.h>
main()
{
	float r,s,h,b,w,l,ac,as,ar,at;
	printf("enter the values r,s,h,b,w,l");
	scanf("%f%f%f%f%f%f",&r,&s,&h,&b,&w,&l);
	ac=3.14*r*r;
	as=s*s;
	ar=l*w;
	at=0.5*b*h;
	printf("the area of circle is %f",ac);
	printf("the area of square is %f",as);
	printf("the area of rectangle is %f",ar);
	printf("the area of triangle is %f",at);
}
