#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r=0,a;
	printf("enter five digit number");
	scanf("%d",&n);
	while(n>=1)
{
	a=n%10;
	r=r*10+a;
	n=n/10;
}
printf("%d",r);
getch();
return 0;
}
