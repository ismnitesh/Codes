#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100005],t,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		int ans=0;
		for(i=0;i<n-1;i++)
		{
			if((a[i] & a[n-1])>ans)
				ans=(a[i] & a[n-1]);
		}
		printf("%d\n",ans);
	}
	return 0;
}