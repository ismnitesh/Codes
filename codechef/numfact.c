#include<math.h>
#include<stdio.h>
int main()
{
	int t,n,a[11],i,j,num;
	int ans;
	int p[1000001]={0};
	for(i=2;i<=sqrt(1000001);i++)
	{	
		if(p[i]==0)
		{
			for(j=i+1;j<=1000000;j++)
			{
				if(j%i==0)
					p[j]=1;
			}
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		int x[1000001];
		for(i=0;i<1000001;i++)
			x[i]=1;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d",&num);
			i=2;
			while(num!=1)
			{
				if(p[i]==1 || num%i!=0)
					i++;
				else
				{
					x[i]++;
					num=num/i;
				}
			}
		}
		ans=1;
		for(i=2;i<1000001;i++)
			ans=ans*x[i];
		printf("%d\n",ans);
	}
	return 0;
}