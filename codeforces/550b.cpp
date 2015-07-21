#include <bits/stdc++.h>
using namespace std;

void value(int a[],int index,int n,int min,int max,int sum,int sum_min,int sum_max,int min_diff,int *ans)
{
	if(index<n)
	{
		value(a,index+1,n,min,max,sum,sum_min,sum_max,min_diff,ans);
		
		sum = sum + a[index];
		max = a[index];
		if(sum>=sum_min && sum<=sum_max && (max-min)>=min_diff)
			*ans = *ans + 1;
		value(a,index+1,n,min,max,sum,sum_min,sum_max,min_diff,ans);
	}
}
int main()
{
	int n,l,r,x,a[100005],i;
	cin >> n >> l >> r >> x;
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	int ans=0;
	for(i=0;i<n;i++)
		value(a,i+1,n,a[i],0,a[i],l,r,x,&ans);
	cout << ans;
	return 0;
}