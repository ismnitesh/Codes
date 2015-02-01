#include<stdio.h>
long long int ans[1000006];
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else 
		return gcd(b,a%b);
}
int main()
{
	int t,a,b,x,i;
	scanf("%d",&t);
	ans[0]=0;
	ans[1]=1;
	for(i=2;i<=1000004;i++)
		ans[i]=(ans[i-1]+ans[i-2])%1000000007;
	while(t--)
	{
		scanf("%d%d",&a,&b);
		x=gcd(a,b);
		printf("%lld\n",ans[x]);
	}
	return 0;
}