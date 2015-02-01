#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r=0,a,m;
	printf("enter any number\n");
	scanf("%d",&n);
	m=n;
	while(n>=1)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	printf("reverse number is %d\n",r);
	if(m==r)
	printf("number is same after reverse\n");
	else
	printf("number is different after reverse\n");
	getch();
	return 0;
}
