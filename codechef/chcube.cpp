#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	string s[10];
	cin >> t;
	while(t--)
	{
		for(i=0;i<6;i++)
			cin >> s[i];
		if((s[0]==s[2] || s[0]==s[3]) && (s[0]==s[4] || s[0]==s[5]))
			cout<<"YES\n";
		else if((s[1]==s[2] || s[1]==s[3]) && (s[1]==s[4] || s[1]==s[5]))
			cout<<"YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}