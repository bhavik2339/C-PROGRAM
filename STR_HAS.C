#include<stdio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			if(b%2==1)
			{
				printf("*");
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}
	getch();
}