#include<stdio.h>
#include<conio.h>
int vot(int cy,int by);
void main()
{
	int cy,by;
	int age;
	clrscr();
	printf("current year");
	scanf("%d",&cy);
	printf("born year");
	scanf("%d",&by);
	age=cy-by;
	if(cy>0&&by>0)
	{
		age=vot(cy,by);
		printf("age is a : %d",age);
		if(age>=18&&age<=100)
		{
			printf("\nabale for votting");
		}
		else if(age>=100)
		{
			printf("\ntake a rest");
		}
		else
		{
			printf("\nunable for votting");
		}
	}
	else
	{
		printf("\nnot allowed");
	}
	getch();
}
int vot(int cy,int by)
{
	int age;
	age=cy-by;
	return age;
}