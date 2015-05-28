#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
long long int a[100003],p[100004];
int main()
{
	long long int t,n,i,sum1=0,sum2=0;
	cin >> t;
	p[0]=1;
	for(i=1;i<100002;i++)
		p[i]=(p[i-1]*2)%m;
	for(i=1;i<100002;i++)
		p[i]=(p[i-1]+p[i])%m;
	while(t--)
	{
		sum1=0;
		sum2=0;
		cin >> n;
		for(i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		for(i=1;i<n;i++)
			sum1=(sum1+(a[i]*p[i-1])%m)%m;
		for(i=n-2;i>=0;i--)
			sum2=(sum2+(a[i]*p[n-2-i])%m)%m;
	long long int	ans=((sum1-sum2)%m+m)%m;
		cout << ans << endl;
	}
	return 0;
}