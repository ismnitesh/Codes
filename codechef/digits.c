#include<stdio.h>
int main()
{
	int n,m,x,B1,B2,i,b1,ans1=0,ans2=0;
	scanf("%d%d",&n,&m);
	char a[n];
	scanf("%s",a);
	while(m--)
	{
		scanf("%d",&x);
		for(i=0;i<x-1;i++)
		{
			b1=a[x-1]-a[i];
			if(b1>0)
			{
				ans1=ans1+b1;
			}
			else if(b1<0)
			{
				ans2=ans2+b1;
			}
		}
		printf("%d\n",ans1-ans2);
		ans1=0;
		ans2=0;
	}
	return 0;
}