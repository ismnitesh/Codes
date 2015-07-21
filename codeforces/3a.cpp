#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	vector <string> v;
	cin >> s >> t;
	while(s[0]!=t[0] || s[1]!=t[1]){
	if(s[0]<t[0])
	{
		if(s[1]<t[1])
		{
			v.push_back("RU");
			s[0]++;
			s[1]++;
		}
		else if(s[1]>t[1])
		{
			v.push_back("RD");
			s[0]++;
			s[1]--;
		}
		else if(s[1]==t[1])
		{
			v.push_back("R");
			s[0]++;
		}
	}
	else if(s[0]>t[0])
	{
		if(s[1]<t[1])
		{
			v.push_back("LU");
			s[0]--;
			s[1]++;
		}
		else if(s[1]>t[1])
		{
			v.push_back("LD");
			s[0]--;
			s[1]--;
		}
		else if(s[1]==t[1])
		{
			v.push_back("L");
			s[0]--;
		}
	}
	else if(s[0]==t[0])
	{
		if(s[1]<t[1])
		{
			v.push_back("U");
			s[1]++;
		}
		else if(s[1]>t[1])
		{
			v.push_back("D");
			s[1]--;
		}
	}
	}
	cout << v.size() << endl;
	for(int i=0;i<v.size();i++)
		cout << v[i] << endl;
	return 0;
}