#include<stdio.h>
int main()
{
	int t,n,m,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		n--;
		a=1;
		b=1;
		while(n--)
		{
			a=a+b;
			if(a>=m)
				a=a-m;
			b=b+a;
			if(b>=m)
				b=b-m;
		}
		printf("%d/%d\n",a,b);
	}
	return 0;
}