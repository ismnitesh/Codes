#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,f=0,i;
	char s[104],t[104];
	cin >> s >> t;
	l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
		if(s[i]<'z' && s[i]!=t[i])
		{
			s[i]=s[i]+1;
			f=1;
			break;
		}
	}
	if(f)
	for(i=0;i<l;i++)
		cout << s[i];
	else
		cout << "No such string";
	return 0;
}