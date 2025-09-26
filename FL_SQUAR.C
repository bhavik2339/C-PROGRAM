#include<stdio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("a value");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=a;c++)
		{
			if(b==1||b==a|c==1||c==a)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}

		}
		printf("\n");
	}
	getch();
}