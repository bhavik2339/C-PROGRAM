#include<stdio.h>
void main ()
{
	int a,b,c;
	clrscr();
	printf("a value is :");
	scanf("%d",&a);
	printf("\nb value is  :");
	scanf("%d",&b);
	printf("\nc value is  :");
	scanf("%d",&c);
	if(a>b)
	{
		if(b>c)
		{
			printf("a large");
		}
		else
		{
			printf("b alrge");
		}
	}
	else
	{
		if(c>a)
		{
			printf("c large");
		}
		else
		{
		       printf("b large");
		}
	}
	getch();
}
