#include<stdio.h>
void main()
{
	int a;
	clrscr();
	printf("a value is  ");
	scanf("%d",&a);
	for(a=1;a<=5;a++)
	{
		printf("\nbca");
			if(a==5)
				break;
			else
				printf("%d",a);
	}
	printf("\n rest of the program");
	getch();
}