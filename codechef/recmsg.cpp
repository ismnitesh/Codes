#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,l,cnt,i;
	string s;
	cin >> t;
	while(t--)
	{
		cnt=0;
		cin >> s;
		l=s.length();
		for(i=0;i<l;i++)
		{
			cnt=cnt+s[i]-'a'+1;
		}
		cout << cnt << endl;
	}
	return 0;
}