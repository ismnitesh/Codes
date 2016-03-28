#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int f=0;
	for(int i=0;i<=c/a;i++)
	{
		for(int j=0;j<=c/b;j++)
		{
			if(a*i+b*j==c)
			{
				f=1;
				break;
			}
		}
		if(f)
			break;
	}
	if(f)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}