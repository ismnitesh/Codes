#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,g1,g;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	g1=a>b?a:b;
	g=g1>c?g1:c;
	printf("greatest number is %d",g);
	getch();
	return 0;
}
