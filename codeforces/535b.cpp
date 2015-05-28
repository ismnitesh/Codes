#include <bits/stdc++.h>
using namespace std;
int main()
{
	int len,i;
	char s[12];
	cin >> s;
	len=strlen(s);
	int ans=0,cnt=1;
	for(i=1;i<len;i++)
		ans+=pow(2,i);
	for(i=0;i<len;i++)
	{
		if(s[i]=='7')
			cnt+=pow(2,len-i-1);
	}
	cout << ans+cnt;
	return 0;
}