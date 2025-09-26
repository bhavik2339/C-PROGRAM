#include<stdio.h>
void main()
{
	int a,b;
	clrscr();
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
	if(a%2==0)

		printf("\n%d odd",a);

	else

		printf("\n%d even",a);
	}
	getch();
}
