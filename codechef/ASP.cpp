#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[1000004];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int f=1;
		for(int i=0;i+2<n;i++)
		{
			if(a[i]>=a[i+1] && a[i]>=a[i+2])
			{
				f=0;
				printf("NO\n");
				break;
			}
		}
		if(f)
			printf("YES\n");
	}
	return 0;
}