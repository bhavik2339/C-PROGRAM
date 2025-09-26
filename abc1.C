#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int c=30;
	int d=a;
	clrscr();
	a=b;
	b=c;
	c=d;
	d=a;
	printf("\n%d %d %d", a,b,c);
	a=b;
	b=c;
	c=d;
	printf("\n%d %d %d",a,b,c);
	getch();//stop to the screen in  output time
}

