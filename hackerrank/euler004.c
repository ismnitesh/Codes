#include<stdio.h>
#include<stdlib.h>
int palin(int x)
{
	int y=0;
	while(x)
	{
		y=y*10+x%10;
		x=x/10;
	}
	if(y==x)
		return 1;
	else
		return 0;
}
int main()
{
	int t,n,m,x,b,num;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&num);
		m=143;
		n=707;
		x=m*n;
		b=x;
		while(x<num)
		{
			if(palin(x))
				b=x;
			if((m+1)*n<(n+1)*m && m<998)
				m++;
			else if(n<998)
				n++;
			x=m*n;
		}
		printf("%d\n",b);
	}
	return 0;
}