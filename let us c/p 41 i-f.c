#include<stdio.h>
#include<conio.h>
int main()
{
	int c,d,t;
	printf("enter two numbers");
	scanf("%d%d",&c,&d);
	t=c;
	c=d;
	d=t;
	printf("c=%d\nd=%d\n",c,d);
	getch();
	return 0;
}
