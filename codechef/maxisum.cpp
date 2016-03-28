#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int test,ind,a[100002],b[100002],n,k;
	cin >> test;
	while(test--)
	{
		cin >> n >> k;
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<n;i++)
			cin >> b[i];
		long long int max_value=0;
		for(int i=0;i<n;i++)
		{
			if(abs(b[i])>max_value)
			{
				max_value=abs(b[i]);
				ind=i;
			}
		}
		if(b[ind]>0)
			a[ind]+=k;
		else
			a[ind]-=k;
		long long int ans=0;
		for(int i=0;i<n;i++)
			ans=ans+(a[i]*b[i]);
		cout << ans << endl;
	}
	return 0;
}