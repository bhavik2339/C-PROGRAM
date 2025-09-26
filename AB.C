#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	clrscr();//clear screen in output time
	printf("\n%d\n",a);
	printf("\n%d\n%d\n",b);
	b=a;
	printf("\n%d\n",b);
	a=b;
	printf("\n%d \n",a);
	getch();//stop  to the run time screen
}