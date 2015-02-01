#include<bits/stdc++.h>
using namespace std;
int getarea(long long int a[],long long int n)
{
	stack<long long int> s;
	long long int max_area=0,top,area_top,i=0;
	while(i<n)
	{
		if(s.empty() || a[s.top()] <= a[i])
			s.push(i++);
		else
		{
			top=s.top();
			s.pop();
			area_top=a[top]*(s.empty()?i:i-s.top()-1);
			if(max_area<area_top)
				max_area=area_top;
		}
	}
	while(s.empty()==false)
	{
		top=s.top();
		s.pop();
		area_top=a[top]*(s.empty()?i:i-s.top()-1);
		if(max_area<area_top)
			max_area=area_top;
	}
	return max_area;
}
int main()
{
	long long int n,i,ans,a[100005];
	while(1)
	{
		scanf("%lld",&n);
		if(n==0)
			return 0;
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		ans=getarea(a,n);
		printf("%lld\n",ans);
	}
	return 0;
}