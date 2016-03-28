#include<bits/stdc++.h>
using namespace std;
int powmod(int a,long long int b)
{
	int ans=1,d=a;
	while(b)
	{
		if(b&1)	ans=(ans*d)%10;
		d=(d*d)%10;
		b/=2;
	}
	return ans;
}
int main()
{
	long long int t,b;
	string s;
	cin >> t;
	while(t--)
	{
		cin >> s >> b;
		int a=s[s.size()-1]-'0';
		cout << powmod(a,b) << endl;
	}
	return 0;
}