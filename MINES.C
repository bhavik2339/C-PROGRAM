#include<stdio.h>
voiud main()
{
	int abc=30;
	int xyz=20;
	int s;
	clrscr();//clear screen in output time
	printf("\n%d",abc);
	printf("\n%d",xyz);
	printf("\n%d",abc-xyz);
	s=abc-xyz;
	xyz=s;
	printf("\n%d",s);
	s=abc-xyz;
	xyz=s;
	printf("\n%d",s);
	s=abc-xyz;
	printf("\n%d,s");
	getch();

}