#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin >> n;
	for(i=0;i<=n;i++)
	{
		for(j=2*n;j>=0;j-=2)
			cout << " ";
		for(j=0;j<=i;j++)
			cout << j;
		for(j=i-1;j>=0;j--)
			cout<<j<<" ";
		cout << endl;
	}
	return 0;
}