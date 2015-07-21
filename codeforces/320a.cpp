#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,i=0;
	string s;
	cin >> s;
	l=s.size();
	while(i<l)
	{
		if(i+2<l && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
			i+=3;
		else if(i+1<l && s[i]=='1' && s[i+1]=='4')
			i+=2;
		else if(s[i]=='1')
			i++;
		else
			break;
	}
	if(i==l)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}