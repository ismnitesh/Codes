#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,a[1005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n-1;i++)
			scanf("%d",&a[i]);
		sort(a,a+n-1);
		int ans=n;
		for(i=0;i<n-1;i++)
		{
			if(a[i]!=i+1)
			{
				ans=i+1;
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}