#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,ans1,ans2,num;
	vector <int> v1,v2,v3;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> num;
		v1.push_back(num);
	}
	for(i=0;i<n-1;i++)
	{
		cin >> num;
		v2.push_back(num);
	}
	for(i=0;i<n-2;i++)
	{
		cin >> num;
		v3.push_back(num);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	sort(v3.begin(),v3.end());
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		{
			ans1=v1[i];
			break;
		}
		if(v1[i]!=v2[i])
		{
			ans1=v1[i];
			break;
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(i==n-2)
		{
			ans2=v2[i];
			break;
		}
		if(v2[i]!=v3[i])
		{
			ans2=v2[i];
			break;
		}
	}
	cout << ans1 << endl << ans2;
	return 0;
}