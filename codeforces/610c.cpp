#include <bits/stdc++.h>
using namespace std;
char change(char x)
{
	if(x=='+')
		return '*';
	else
		return '+';
}
int main()
{
	int z,n;
	char a[512][512];
	a[0][0]='+';
	for(int i=0;i<9;i++)
	{
		z=1;
		for(int j=0;j<i;j++)
			z*=2;
		for(int j=0;j<z;j++)
		{
			for(int k=0;k<z;k++)
			{
				a[j+z][k]=a[j][k];
				a[j][k+z]=a[j][k];
				a[j+z][k+z]=change(a[j][k]);
			}
		}
	}
	cin >> n;
	z=1;
	for(int i=0;i<n;i++)
		z*=2;
	for(int i=0;i<z;i++)
	{
		for(int j=0;j<z;j++)
			cout << a[i][j];
		cout << endl;
	}
	return 0;
}