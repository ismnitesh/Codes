#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,s,c,k,ans,i;
	scanf("%lld",&t);
	while(t--)
	{
		ans=0;
		scanf("%lld%lld%lld",&s,&c,&k);
		if(k==1)
		{
			if(s==0)
			{
				for(i=1;i<=c;i++)
					ans=ans+pow(2,i);
				printf("%lld\n",ans);
			}
			else
			{
				ans=pow(2,s)+1;
				for(i=s;i<=c;i++)
					ans=ans+pow(2,i);
				printf("%lld\n",ans);
			}
		}
		else
		{
			if(s==0 || k>s)
				printf("0\n");
			else
			{
				ans=pow(2,s-k+1)+1;
				if(c+k>s)
					ans=ans+pow(2,s-k+2)-pow(2,s-k+1);
				printf("%lld\n",ans);
			}
		}
	}
	return 0;
}