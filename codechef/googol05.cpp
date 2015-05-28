#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	string str;
	vector <string> v;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(),v.end());
	int count=0;
	for(i=0;i<n;i++)
	{
		cout << v[i] << " ";
		while(i<n-1 && v[i]==v[i+1])
		{
			count++;
			i++;
		}
		cout << count+1 << endl;
		count=0;
	}
	return 0;
}