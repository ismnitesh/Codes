#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,a[100005],n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		int count=1;
		int max=0;
		for(i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
				count++;
			if(a[i]!=a[i-1])
				count=1;
			if(count>max)
				max=count;
		}
		printf("%d\n",n-max);
	}
	return 0;
}