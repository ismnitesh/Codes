#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a[102][102],ch;
	int n,m,i,j;
	for(i=0;i<102;i++)
	{
		for(j=0;j<102;j++)
		{
			if((i+j)%2)
				a[i][j]='W';
			else
				a[i][j]='B';
		}
	}
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin >> ch;
			if(ch=='.')
				cout<<a[i][j];
			else
				cout <<"-";
		}
		cout << endl;
	}
	return 0;
}