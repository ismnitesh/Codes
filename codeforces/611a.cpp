#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	cin >> s;
	cin >> s;
	if(s[s.size()-1]=='k')
	{
		if(n==5 || n==6)
			cout << "53";
		else
			cout << "52";
	}
	else
	{
		if(n<=29)
			cout << "12";
		else if(n==30)
			cout << "11";
		else cout << "7";
	}
	return 0;
}