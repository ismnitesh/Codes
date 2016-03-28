#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,l,f;
	string x,y;
	cin >> t;
	while(t--)
	{
		cin >> x >> y;
		l=x.size();
		f=0;
		for(i=0;i<l;i++)
		{
			if(x[i]!='?' && y[i]!='?' && x[i]!=y[i])
			{
				f=1;
				break;
			}
		}
		if(f)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	return 0;
}