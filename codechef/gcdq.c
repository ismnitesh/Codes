#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,a[100005],n,q,i,g,lg[100005],rg[100005],l,r;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&q);
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		lg[1]=a[1];
		for(i=2;i<=n;i++)
			lg[i]=gcd(lg[i-1],a[i]);
		rg[n]=a[n];
		for(i=n-1;i>=1;i--)
			rg[i]=gcd(rg[i+1],a[i]);
		while(q--)
		{
			scanf("%d%d",&l,&r);
			if(l==1)
				g=rg[r+1];
			else if(r==n)
				g=lg[l-1];
			else
				g=gcd(lg[l-1],rg[r+1]);
			printf("%d\n",g);
		}
	}
	return 0;
}