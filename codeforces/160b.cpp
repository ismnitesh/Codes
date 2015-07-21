#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[103],b[103];
	string s;
	cin >> n;
	cin >> s;
	for(i=0;i<n;i++)
		a[i]=s[i]-'0';
	for(i=n;i<2*n;i++)
		b[i-n]=s[i]-'0';
	sort(a,a+n);
	sort(b,b+n);
	int f=0;
	if(a[0]<b[0])
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>=b[i])
			{
				f=1;
				cout << "NO";
				break;
			}
		}
	}
	else if(a[0]>b[0])
	{
		for(i=1;i<n;i++)
		{
			if(a[i]<=b[i])
			{
				f=1;
				cout << "NO";
				break;
			}
		}
	}
	else
	{
		f=1;
		cout << "NO";
	}
	if(f==0)
		cout << "YES";
	return 0;
}