#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[27];
	memset(a,0,sizeof(int)*27);
	string s;
	cin >> n >> s;
	for(int i=0;i<n;i++)
	{
		if(s[i]>='a' && s[i]<='z')
			a[s[i]-'a']++;
		if(s[i]>='A' && s[i]<='Z')
			a[s[i]-'A']++;
	}
	int flag=0;
	for(int i=0;i<26;i++)
	{
		if(a[i]==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}