#include<stdio.h>
long long int max(long long int a,long long int b)
{
	if(a>b)
		return a;
	else
		return b;
}
long long int xor(long long int a[],long long int i,long long int ans)
{
	if(i<0)
		return ans;
	else
		return max(xor(a,i-1,ans),xor(a,i-1,ans^a[i]));
}
int main()
{
	long long int t,n,k,i,a[1005],ans;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		ans=k;
		ans=xor(a,n-1,ans);
		printf("%lld\n",ans);
	}
}