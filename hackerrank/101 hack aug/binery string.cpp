#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,t,i,cnt=0;
	string s;
	cin >> n >> k >> t;
	cin >> s;
	for(i=0;i<s.size();i++)
	{
		if(s[i]=='1')
		{
			int j=i;
			while(j-k>=0 && s[j-k]=='0')
			{
				j-=k;
				cnt++;
				if(cnt==t)
					break;
			}
			s[j]='1';
			s[i]='0';
		}
		if(cnt==t)
			break;
	}
	cout << s;
	return 0;
}