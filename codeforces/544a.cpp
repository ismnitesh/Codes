#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,f[27];
	memset(f,0,sizeof(f));
	char s[103];
	cin >> k;
	int x=k;
	cin >> s;
	l=strlen(s);
	for(int i=0;i<l;i++)
		f[s[i]-'a']++;
	int cnt=0;
	for(int i=0;i<26;i++)
		if(f[i]!=0)
			cnt++;
	if(cnt>=k)
	{
		cout << "YES" << endl;
		memset(f,0,sizeof(f));
		for(int i=0;i<l;i++)
		{
			if(k && f[s[i]-'a']==0)
			{
				if(k<x)
					cout << endl;
				cout << s[i];
				k--;
				f[s[i]-'a']++;
			}
			else
			cout << s[i]; 
		}
	}
	else
		cout << "NO";
	return 0;
}