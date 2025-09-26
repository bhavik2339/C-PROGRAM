#include<stdio.h>
void main ()
{
	int a;
	clrscr();
	printf("a value =");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("this is leap year");
	}
	else
	{
		printf("this is not leap year");
	}
	getch();
}

