#include<stdio.h>
void display(int marks[]);
main()
{
	int marks[]={18,45,33,1,17};
	display(marks);
}
void display(int marks[])
{
	int i;
	printf("the marks are :\n");
	for(i=0;i<4;i++)
	{
		printf("%d\n",marks[i]);
	}
}
