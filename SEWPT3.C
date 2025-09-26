#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int c=30;
	clrscr();//clear screen in output time
	printf("\n%d %d %d", a , b , c  );
	a=20;
	b=30;
	c=10;
	printf("\n%d %d %d",a , b , c);
	a=30;
	b=10;
	c=20;
	printf("\n%d %d %d",a , b , c);
	getch();//stop to the screen in output time
}