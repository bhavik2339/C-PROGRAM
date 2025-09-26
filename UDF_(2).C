#include<stdio.h>
//whithout return value with argument
void fyb(int);
void main()
{
	int var;
	clrscr();
	printf("enter value var");
	scanf("%d",&var);
	printf("%d\n\n",var);
	fyb(var);
	printf("\n after funcation calling: %d \n\n",var);
	getch();
}
void fyb(int a)
{
	printf("hello %d",a);
}