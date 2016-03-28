#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,num;
	vector<int> a,b;
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		cin >> num;
		a.push_back(num);
	}
	for(int i=0;i<m;i++)
	{
		cin >> num;
		b.push_back(num);
	}
	sort(a.begin(),a.end());
	vector<int>::iterator up;
	for(int i=0;i<m;i++)
	{
		up=upper_bound(a.begin(),a.end(),b[i]);
		cout << up-a.begin() << " ";
	}
	return 0;
}