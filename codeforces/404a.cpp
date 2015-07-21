#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	char a[302][302];
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	int f=1;
	if(a[0][0]==a[0][1])
	{
		cout << "NO";
		return 0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j || j==n-1-i)
			{
				if(a[i][j]!=a[0][0])
				{
					f=0;
					break;
				}
			}
			else if(a[i][j]!=a[0][1])
			{
				f=0;
				break;
			}
		}
	}
	if(f)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}