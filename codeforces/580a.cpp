#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100004];
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	int ans=1,final=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[i-1])
			ans=1;
		else
		{
			ans++;
			if(ans>final)
				final=ans;
		}
	}
	cout << final;
	return 0;
}