#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g;
	clrscr();//clear to the screen in output itme
	printf("value of a\n");
	scanf("%d",&a);
	printf("\nvalue of b\n");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("\nvalue of a plus b : %d\n",c);
	printf("\nvalue of a mines b : %d\n",d);
	printf("\nvalue ofa multiply b : %d\n",e);
	printf("\nvalue of a divied b : %d\n",f);
	printf("\nmodulo ans ab :%d",g);
	getch();//stop to the screen in output time
}