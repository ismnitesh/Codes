#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,l1[3003],l2[3003];
	string s1[3003],s2[3003],s;
	cin >> n >> m;
	for(i=0;i<m;i++)
	{
		cin >> s1[i] >> s2[i];
		l1[i]=s1[i].size();
		l2[i]=s2[i].size();
	}
	while(n--)
	{
		cin >> s;
		for(i=0;i<m;i++)
		{
			if(s==s1[i])
			{
				if(l1[i]<=l2[i])
					cout << s1[i] << " ";
				else
					cout << s2[i] << " ";
				break;
			}
		}
	}
	return 0;
}