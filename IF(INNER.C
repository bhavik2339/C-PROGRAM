#include<stdio.h>
void main()
{
	int a,b;
	clrscr();//clear to screen
	printf("a :");
	scanf("%d",&a);
	printf("b :");
	scanf("%d",&b);
	if(a>=b)//outer  if
	{
		if(a==b)//inner if
		{
			printf("both are same\n");
		}
		else //inner else
		{
			printf("A large");
		}
	}
	else
	{
		printf("B large");
	}
	getch();//stop to the screen
}