#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,num;
	vector <long long int >v;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(),v.end());
	long long int timer=0;
	long long int cnt=0;
	for(i=0;i<n;i++)
	{
		if(timer<=v[i])
		{
			cnt++;
			timer+=v[i];
		}
	}
	cout << cnt;
	return 0;
}