#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	string s;
	vector<string> v;
	cin >> t;
	while(t--)
	{
		v.clear();
		cin >> n >> k;
		for(int i=0;i<n;i++)
		{
			cin >> s;
			v.push_back(s);
		}
		if(k==1)
			cout << "YES\n";
		else if(n==3 && k==3)
		{
			int f=0;
			int cx=0,cdot=0;
			for(int i=0;i<3;i++)
			{
				cx=0;
				cdot=0;
				for(int j=0;j<3;j++)
				{
					if(v[i][j]=='X')
						cx++;
					if(v[i][j]=='.')
						cdot++;
				}
				if(cx+cdot==3 && cdot<=1)
				{
					f=1;
					break;
				}
				if(f==1)
					break;
			}
			cx=0;
			cdot=0;
			for(int i=0;i<3;i++)
			{
				if(v[i][i]=='X')
					cx++;
				if(v[i][i]=='.')
					cdot++;
			}
			if(cx+cdot==3 && cdot<=1)
				f=1;
			cx=0;
			cdot=0;
			for(int i=0;i<3;i++)
			{
				if(v[i][2-i]=='X')
					cx++;
				if(v[i][2-i]=='.')
					cdot++;
			}
			if(cx+cdot==3 && cdot<=1)
				f=1;
			for(int i=0;i<3;i++)
			{
				cx=0;
				cdot=0;
				for(int j=0;j<3;j++)
				{
					if(v[j][i]=='X')
						cx++;
					if(v[j][i]=='.')
						cdot++;
				}
				if(cx+cdot==3 && cdot<=1)
				{
					f=1;
					break;
				}
				if(f==1)
					break;
			}
			if(f==1)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else
			cout << "NO\n";
	}
}