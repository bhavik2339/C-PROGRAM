#include<stdio.h>
void main()
{
	int a;
	clrscr();
	printf("\na=");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("sunday");
		break;
		case 2:
		printf("monday");
		break;
		case 3:
		printf("tuesday");
		break;
		case 4:
		printf("wenesday");
		break;
		case 5:
		printf("thrusday");
		break;
		case 6:
		printf("friday");
		break;
		case 7:
		printf("saturady");
		break;
		default :
		printf("sory");
	}
	getch();
}