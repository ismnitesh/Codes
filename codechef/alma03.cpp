#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,n,max[205],g[205],i,j,num;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int k=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&num);
			if(i==0)
			{
				g[k]=num;
				max[k]=num;
				k++;
			}
			else
			{
				int flag=0;
				for(j=0;j<k;j++)
				{
					if(gcd(num,g[j])>1)
					{
						flag=1;
						if(num>max[j])
							max[j]=num;
						break;
					}
				}
				if(flag==0)
				{
					g[k]=num;
					max[k]=num;
					k++;
				}
			}
		}
		long long int ans=1;
		for(i=0;i<k;i++)
			ans=(ans*max[i])%1000000007;
		printf("%lld\n",ans);
	}
	return 0;
}