#include<stdio.h>
int max(int a,int b,int c)
{
	if(a>=b && a>=c)
		return a;
	else if(b>=a && b>=c)
		return b;
	else
		return c;
}	
int main()
{
	int t,i,r,g,b,m,maxr,maxg,maxb,maxt,x;
	scanf("%d",&t);
	while(t--)
	{
		maxr=0;
		maxg=0;
		maxb=0;
		scanf("%d%d%d%d",&r,&g,&b,&m);
		for(i=0;i<r;i++)
		{
			scanf("%d",&x);
			if(maxr<x)
				maxr=x;
		}
		for(i=0;i<g;i++)
		{
			scanf("%d",&x);
			if(maxg<x)
				maxg=x;
		}
		for(i=0;i<b;i++)
		{
			scanf("%d",&x);
			if(maxb<x)
				maxb=x;
		}
	//	printf("%d %d %d\n",maxr,maxg,maxb);
		maxt=max(maxr,maxg,maxb);
		while(m--)
		{
			if(maxr>=maxg && maxr>=maxb)
			{
				maxr=maxr/2;
			}
			else if(maxg>=maxr && maxg>=maxb)
			{
				maxg=maxg/2;
			}
			else
			{
				maxb=maxb/2;
			}
	//		printf("%d %d %d\n",maxr,maxg,maxb);
			if(maxt>max(maxr,maxg,maxb))
				maxt=max(maxr,maxg,maxb);
		}
		printf("%d\n",maxt);
	}
	return 0;
}