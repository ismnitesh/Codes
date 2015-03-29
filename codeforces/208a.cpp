#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,i,c=1;
	string s;
	cin >> s;
	l=s.size();
	for(i=0;i<l;i++)
	{
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		{
			i+=2;
			c++;
		}
		else
		{
			cout << s[i];
			c=0;
		}
		if(c==1)
			cout << " ";
	}
	return 0;
}