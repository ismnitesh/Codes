#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,len;
	char s[100004],t[100004],p[100004];
	cin >> s >> t;
	len=strlen(s);
	int dist=0,cnt=0;
	for(i=0;i<len;i++)
		if(s[i]!=t[i])
			dist++;
	if(dist%2)
		cout << "impossible";
	else
	{
		dist/=2;
		for(i=0;i<len;i++)
		{
			if(s[i]==t[i])
				p[i]=s[i];
			else if(cnt<dist){
				cnt++;
				p[i]=s[i];
			}
			else{
				cnt++;
				p[i]=t[i];
			}
		}
		for(i=0;i<len;i++)
			cout << p[i];
	}
	return 0;
}