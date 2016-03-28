#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n1,n2,m,x,z;
	cin >> t;
	while(t--)
	{
		cin >> n1 >> n2 >> m;
		x=min(n1,n2);
		if(x<=m)
		{
			n1-=x;
			n2-=x;
		}
		else
		{
			z=(m*(m+1))/2;
			if(z<x)
			{
				n1-=z;
				n2-=z;
			}
			else
			{
				n1-=x;
				n2-=x;
			}
		}
		cout << n1+n2 << endl;
	}
	return 0;
}