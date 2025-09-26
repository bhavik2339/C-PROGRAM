#include<stdio.h>
void fyb(int);
void main()
{
	int var;
	clrscr();
	printf("enter value for var");
	scanf("%d",&var);
	printf("%d\n\n",var);
	fyb(var);
	fyb(35);
	fyb(10+2);
	printf("\nafter function clling %d \n\n",var);
	getch();
}
void fyb(int a)
{
	a=a+10;
	printf("hello %d\n\n",a);
}