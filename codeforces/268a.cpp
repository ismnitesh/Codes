#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[31][2],i,j,count=0;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i][0] >> a[i][1];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i][0]==a[j][1])
				count++;
			if(a[i][1]==a[j][0])
				count++;
		}
	}
	cout << count;
	return 0;
}