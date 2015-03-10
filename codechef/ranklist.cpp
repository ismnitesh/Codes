#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int n,s,count,remain,total_sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&s);
		count=0;
		total_sum=n*(n+1)/2;
		remain=total_sum-s;
		n--;
		while(remain>0)
		{
			remain=remain-n;
			n--;
			count++;
		}
		printf("%lld\n",count);
	}
	return 0;
}