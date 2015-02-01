#include<stdio.h>
#define m 10
int pow_mod(int a,  int n)
{
	int ans = 1, d =a;
	while (n)
	{
		if (n & 1)
			ans = (ans * d) % m;
		d = (d * d)%m;
		n >>= 1;
	}
	return ans;
}
int main()
{
	int a,b,t,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		ans=pow_mod(a,b);
		printf("%d\n",ans);
	}
	return 0;
}