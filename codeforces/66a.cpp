#include <bits/stdc++.h>
using namespace std;
int pos(string a,string b)
{
	if(a.length()<b.length())
		return 1;
	if(a.length()>b.length())
		return 0;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]<b[i])
			return 1;
		if(a[i]>b[i])
			return 0;
	}
	return 1;
}
int neg(string a,string b)
{
	int la=a.length();
	int lb=b.length();
	if(la>lb)
		return 0;
	if(la<lb)
		return 1;
	for(int i=1;i<la;i++)
	{
		if(a[i]<b[i])
			return 1;
		if(a[i]>b[i])
			return 0;
	}
	return 1;
}
int main()
{
	string s;
	cin >> s;
	string plong="9223372036854775807";
	string nlong="- 9223372036854775808";
	string pint="2147483647";
	string nint="- 2147483648";
	string pshort="32767";
	string nshort="- 32768";
	string pbyte="127";
	string nbyte="- 128";
	if(s[0]=='-')
	{
		if(neg(s,pbyte))
			cout << "byte";
		else if(neg(s,pshort))
			cout << "short";
		else if(neg(s,pint))
			cout << "int";
		else if(neg(s,plong))
			cout << "long";
		else cout << "BigInteger";
	}
	else
	{
		if(pos(s,pbyte))
			cout << "byte";
		else if(pos(s,pshort))
			cout << "short";
		else if(pos(s,pint))
			cout << "int";
		else if(pos(s,plong))
			cout << "long";
		else cout << "BigInteger";
	}
	return 0;
}