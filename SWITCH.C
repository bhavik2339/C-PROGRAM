#include<stdio.h>
void main()
{
	int a;
	clrscr();
	printf("a =");
	scanf("\n%d",&a);
	switch(a)
	{
		case 1:
		printf("one");
		break;
		case 2:
		printf("two");
		break;
		case 3:
		printf("three");
		break;
		deafult :
			printf("sorry");
	}
	getch();
}