#include<stdio.h>
void prime(int);
int i;
int main()
{
	int d,a,b,n,t;
	scanf("%d",&t);
	while(t--)
	{
		i=0;
		scanf("%d%d",&a,&b);
		n=a+b;
		d=n;
		while(i!=1)
		{
			d++;
			prime(d);
		}
		printf("%d\n",d-n);
	}
	return 0;
}
void prime(int x)
{
	int z=x-1;
	int flag=1;
	while(flag!=0 && z!=1)
	{
		if(x%z==0)
		{
			flag=0;
			i=0;
			break;
		}
		else
		{
			i=1;
			z--;
		}
	}
}
