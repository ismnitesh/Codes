#include<bits/stdc++.h>
using namespace std;
int count(int a[],int n,int m)
{
	if(m==0)
		return 1;
	if(m<0)
		return 0;
	if(n<=0 && m>=1)
		return 0;
	return count(a,n-1,m)+count(a,n,m-a[n-1]);
}
int main()
{
	int t,i,n,m,a[25],ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		ans=count(a,n,m);
		if(ans)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}