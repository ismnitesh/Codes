#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,num;
	vector<int>v;
	cin >> n >> k;
	for(i=0;i<n;i++)
	{
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(),v.end());
	int sum=0,count=0;
	for(i=0;i<n;i++)
	{
		sum+=v[i];
		if(sum>k)
			break;
		count++;
	}
	cout << count;
}