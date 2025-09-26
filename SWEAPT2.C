#include<stdio.h>
void main()
{
	int a;
	int b;
	clrscr();
	printf("a value is :");
	scanf("%d",&a);
	printf("b value is :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na value is:%d\nb value is:%d",a,b);
	getch();
}