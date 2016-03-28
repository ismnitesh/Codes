#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	string s;
	cin >> n >> t;
	if(t==10 && n==1)
		cout << "-1";
	else if(t!=10)
	{
		char c=t+'0';
		for(int i=0;i<n;i++)
			s+=c;
		cout << s;
	}
	else
	{ 
		for(int i=0;i<n;i++)
			s+='1';
		s[n-1]='0';
		cout << s;
	}
}