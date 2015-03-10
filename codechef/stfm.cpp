#include<bits/stdc++.h>
using namespace std;
long long int f[10000007];
int main()
{
	long long int n,m,sum,i,num,x;
	scanf("%lld%lld",&n,&m);
	f[1]=1%m;
	for(i=2;i<m;i++)
		f[i]=(f[i-1]*i)%m;
	for(i=2;i<m;i++)
		f[i]=(((i*f[i])%m)+f[i-1])%m;
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&num);
		if(num%2==0)
		x=((num%m)*((((num/2)%m)*((num+1)%m))%m))%m;
		else
		x=((num%m)*(((num%m)*(((num+1)/2)%m))%m))%m;
		sum=(sum+x)%m;
		if(num<m)
			sum=(sum+f[num])%m;
		else
			sum=(sum+f[m-1])%m;
	}
	printf("%lld",sum);
	return 0;
}