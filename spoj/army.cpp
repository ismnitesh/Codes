#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,num;
	cin >> t;
	while(t--)
	{
		int g=0,mec=0;
		cin >> n >> m;
		for(int i=0;i<n;i++)
		{
			cin >> num;
			if(num>g)
				g=num;
		}
		for(int i=0;i<m;i++)
		{
			cin >> num;
			if(num>mec)
				mec=num;
		}
		if(mec>g)
			cout << "MechaGodzilla\n";
		else
			cout << "Godzilla\n";
	}
	return 0;
}