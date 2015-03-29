#include <iostream>
using namespace std;
int main()
{
	int f=0,i,l;
	string s,t;
	cin >> s >> t;
	l=s.length();
	for(i=0;i<l;i++)
	{
		if(s[i]!=t[l-i-1])
		{
			f=1;
			break;
		}
	}
	if(f)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}