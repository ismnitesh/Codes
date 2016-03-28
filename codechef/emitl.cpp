#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a[27];
	string s;
	cin >> t;
	while(t--)
	{
		cin >> s;
		memset(a,0,sizeof(a));
		for(int i=0;i<s.size();i++)
			a[s[i]-'A']++;
		if(a['L'-'A']>1 && a['T'-'A']>1 && a['I'-'A']>1 && a['M'-'A']>1 && a['E'-'A']>1)
			cout << "YES\n";
		else if(a['L'-'A']>1 && a['T'-'A']>1 && a['I'-'A']>1 && a['M'-'A']>1 && a['E'-'A']>0 && s.size()==9)
			cout << "YES\n";
		else cout << "NO\n";					
	}
	return 0;
}