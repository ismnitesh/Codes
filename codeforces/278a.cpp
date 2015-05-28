#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s,t,n,i,total=0,a[104];
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> a[i];
		total+=a[i];
	}
	cin >> s >> t;
	if(s>t)
		swap(s,t);
	int sum=0;
	for(i=s;i<t;i++)
		sum+=a[i];
	if(sum<total-sum)
		cout << sum;
	else
		cout << total-sum;
	return 0;
}