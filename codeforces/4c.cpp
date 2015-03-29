#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	string str;
	cin >> n;
	map <string,int> m;
	for(i=0;i<n;i++)
	{
		cin >> str;
		if(m[str]==0)
		{
			cout << "OK" << endl;
			m[str]++;
		}
		else
		{
			cout << str << m[str] << endl;
			m[str]++;
		}
	}
	return 0;
}