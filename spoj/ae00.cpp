#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,n,sum=0;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j*j<=i;j++)
		{
			if(i%j==0)
				sum++;
		}
	}
	printf("%lld",sum);
	return 0;
}