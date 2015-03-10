#include<bits/stdc++.h>
using namespace std;
int p[100005];
void init()
{
	int i,j;
	for(i=0;i<=100000;i++)
		p[i]=0;
	for(i=2;i<=100000;i=i+1)
	{
		if(p[i]==0)
		{
			for(j=i+i;j<=100000;j=j+i)
			{
				p[j]++;
			}
		}
	}
	for(i=2;i<=100000;i++)
	{
		if(p[i]==0)
			p[i]=1;
	}
}
int main()
{
	init();
	int t,i,x,y,n,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&x,&y,&n);
		count=0;
		for(i=x;i<=y;i++)
		{
			if(p[i]==n)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}