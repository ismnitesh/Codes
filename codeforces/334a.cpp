#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k=1,i,j;
	cin >> n;
	vector<int> v[102];
	for(j=0;j<n/2;j++)
	{
		for(i=1;i<=n;i++)
			v[i].push_back(k++);
		for(i=n;i>=1;i--)
			v[i].push_back(k++);
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
			cout << v[i][j] << " ";
		cout << endl;
	}
	return 0;
}