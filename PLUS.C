#include<stdio.h>
void main()
{
	int nbm=78;
	int ibm=77;
	int s;
	clrscr();
	printf("%d",nbm+ibm);
	s=nbm+ibm;
	nbm=s;
	printf("\n%d",s);
	s=nbm+ibm;
	printf("\n%d",s);
	getch();
}

