#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	s="0"+s;
	int l=s.length();
	int num=s[l-1]-'0'+(s[l-2]-'0')*10;
	if(num%4==0)
		cout << "4";
	else
		cout << "0";
	return 0;
}