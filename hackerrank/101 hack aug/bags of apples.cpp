#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	int a[1004];
	cin >> t;
	vector<int>v1,v2;
	int sum=0;
	for(i=0;i<t;i++)
	{
		cin >> a[i];
		sum+=a[i];
		if(a[i]%3==1)
			v1.push_back(a[i]);
		else if(a[i]%3==2)
			v2.push_back(a[i]);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	if(sum%3==1)
	{
		if(v1.size()>0 && v2.size()>1)
		{
			if(v1[0]<v2[0]+v2[1])
				sum-=v1[0];
			else
				sum=sum-v2[0]-v2[1];
		}
		else if(v2.size()<2)
			sum-=v1[0];
		else if(v1.size()<1)
			sum=sum-v2[0]-v2[1];
		else
			sum=0;
	}
	else if(sum%3==2)
	{
		if(v2.size()>0 && v1.size()>1)
		{
			if(v2[0]<v1[0]+v1[1])
				sum-=v2[0];
			else
				sum=sum-v1[0]-v1[1];
		}
		else if(v1.size()<2)
			sum-=v2[0];
		else if(v2.size()<1)
			sum=sum-v1[0]-v1[1];
		else
			sum=0;
	}
	cout << sum;
	return 0;
}