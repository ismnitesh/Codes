#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,a[100005],q,x,y,num,i;
	scanf("%lld",&t);
	a[0]=0;
	for(i=1;i<=t;i++)
	{
		scanf("%lld",&num);
		a[i]=a[i-1]+num;
	}
	scanf("%lld",&q);
	while(q--)
	{
		scanf("%lld%lld",&x,&y);
		printf("%lld\n",a[y]-a[x-1]);
	}
	return 0;
}