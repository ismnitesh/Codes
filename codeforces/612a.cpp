#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,q;
	string s;
	cin >> n >> p >> q;
	cin >> s;
	int i=0;
	if(n%p==0)
	{
		cout << n/p << endl;
		int j=0;
		for(int i=0;i<n/p;i++)
		{
			for(int z=0;z<p;z++)
				cout << s[j++];
			cout << endl;
		}
	}
	else if(n%q==0)
	{
		cout << n/q << endl;
		int j=0;
		for(int i=0;i<n/q;i++)
		{
			for(int z=0;z<q;z++)
				cout << s[j++];
			cout << endl;
		}
	}
	else
	{
		int flag=0;
		for(int a=0;a<=100;a++)
		{
			for(int b=0;b<=100;b++)
			{
				if(a*p+b*q==n)
				{
					cout << a+b << endl;
					int j=0;
					for(int z=0;z<a;z++)
					{
						for(int k=0;k<p;k++)
							cout << s[j++];
						cout << endl;
					}
					for(int z=0;z<b;z++)
					{
						for(int k=0;k<q;k++)
							cout << s[j++];
						cout << endl;
					}
					flag=1;
					break;
				}
			}
			if(flag)
				break;
		}
		if(flag==0)
			cout << "-1";
	}
	return 0;
}