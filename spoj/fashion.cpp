#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,sum,n,m[1002],f[1002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&m[i]);
		for(i=0;i<n;i++)
			scanf("%d",&f[i]);
		sort(m,m+n);
		sort(f,f+n);
		sum=0;
		for(i=0;i<n;i++)
			sum=sum+m[i]*f[i];
		printf("%d\n",sum);
	}
	return 0;
}