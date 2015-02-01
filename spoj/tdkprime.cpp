#include<bits/stdc++.h>
using namespace std;
int vis[90000000],pri[5000005];
int main()
{
	int t,n,i,j;
	memset(vis,0,90000000);
	for(i=3;i<=10000;i+=2)
		if(vis[i]==0)
			for(j=i*i;j<90000000;j+=2*i)
				vis[j]=1;
	pri[1]=2;
	int cnt=2;
	for(i=3;i<90000000 && cnt<=5000000;i++)
	{
		if(vis[i]==0 && i%2==1)
			pri[cnt++]=i;
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",pri[n]);
	}
}