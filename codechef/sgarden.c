#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
long long int lcm(long long int a,long long int b)
{
	long long int g;
	g=gcd(a,b);
	a=a/g;
	b=b/g;
	return (a*b*g);
}
int main()
{
	int t,n,i,current,val,next,a[100004],b[100005];
	long long int l,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
		}
		l=1;
		for(i=1;i<=n;i++)
		{
			if(b[i]!=-1)
			{
				count=1;
				val=a[i];
				next=a[i];
				b[next]=-1;
				while(a[next]!=val)
				{
					count++;
					next=a[next];
					b[next]=-1;
				}
				l=lcm(l,count);
			}
		}
		printf("%lld\n",l%1000000007);
	}
	return 0;
}