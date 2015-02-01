#include<bits/stdc++.h>
using namespace std;
int a[24];
int max(int a,int b)
{
	return a>b?a:b;
}
int cal(int c,int i,int n)
{
	if(i>=n)
		return 0;
	if(c<=0)
		return 0;
	if(a[i]>c)
		return max(0,cal(c,i+1,n));
	return max(a[i]+cal(c-a[i],i+1,n),cal(c,i+1,n));
}
int main()
{
	int t,n,c,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&c);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("%d\n",c-cal(c,0,n));
	}
	return 0;
}