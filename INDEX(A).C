#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4];
	int index;
	clrscr();
	a[3]=10;
	a[0]=45;
	a[2]=3;
	a[1]=0;
	for(index=0;index<=3;index++)
	{
		printf("\n %d",a[index]);
	}
	getch();
}