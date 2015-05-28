#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j;
	char a[100][100];
	cin >> n >> k;
	if(k>(n*n)/2 && n%2==0)
		cout << "NO";
	else if(k>(n*n+1)/2 && n%2==1)
		cout << "NO";
	else
	{
		cout << "YES" << endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(k && (i+j)%2==0){
					a[i][j]='L';
					k--;
				}
				else
					a[i][j]='S';
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cout << a[i][j];
			cout << endl;
		}
	}
	return 0;
}