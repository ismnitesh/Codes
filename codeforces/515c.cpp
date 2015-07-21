#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	string ans,s,x[10]={"0","0","2","3","322","5","53","7","7222","7332"};
	cin >> n;
	cin >> s;
	ans="";
	for(i=0;i<n;i++)
	{
		if(s[i]!='0' && s[i]!='1')
			ans+=x[s[i]-'0'];
	}
	int l=ans.size();
	char tmp[1000];
	for(i=0;i<l;i++)
	{
		tmp[i]=ans[i];
	}
	sort(tmp,tmp+l);
	for(i=l-1;i>=0;i--)
		cout << tmp[i];
	return 0;
}