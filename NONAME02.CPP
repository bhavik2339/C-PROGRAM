#include<stdio.h>
void main()
{
	int cy,by,c,a=18;
	clrscr();
	printf("current year :");
	scanf("%d",&cy);
	printf("born year :");
	scanf("%d",&by);
	c=cy-by;
	if(c>=a)
	{
		printf("age votting ");
	}
	else
	{
		printf("age voting not ");
	}
	getch();
}