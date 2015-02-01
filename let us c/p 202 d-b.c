#include<stdio.h>
#include<conio.h>
int power(int,int);
int main()
{
	int a,b,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=power(a,b);
	printf("%d",c);
	getch();
	return 0;
}
int power(int a,int b)
{
	int i,c=1;
	for(i=0;i<b;i++)
	c=c*a;
	return c;
}
