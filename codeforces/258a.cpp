#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int l=s.size(),i,f=0;
	for(i=0;i<l;i++)
	{
		if(s[i]=='0' && f==0)
			f=1;
		else if(s[i]=='0' && f==1)
			cout << "0";
		else if(s[i]=='1' && i<l-1)
			cout << "1";
		else if(s[i]=='1' && i==l-1 && f==1)
			cout << "1";
	}
	return 0;
}