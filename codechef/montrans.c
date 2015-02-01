#include<stdio.h>
int doll=0,cent=0;
int max(int a,int b)
{
	if(a>doll)
		return 1;
	else if(a==doll && b>cent)
		return 1;
	else
		return 0;
}
int main()
{
	int t,a,b,c,x,i,j;
	scanf("%d",&t);
	j=0;
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&c);
		while(a || b>c)
		{
			if(b<c && a>0)
			{
				a--;
				b=b+100;
			}
			b=b-c;
			x=a;
			a=b;
			b=x;
			j++;
			if(max(a,b))
			{
				doll=a;
				cent=b;
				i=j;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}