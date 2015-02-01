#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r=0,a;
	printf("enter any number\n");
	scanf("%d",&n);
	while(n>=1)
	{
		a=n%10;
		r=r+a;
		n=n/10;
	}
	printf("sum of digits is %d\n",r);
	getch();
	return 0;
}
