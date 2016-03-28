#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,num;
	cin >> t;
	int a[250005][2];
	while(t--)
	{
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin >> num;
				a[num][0]=i;
				a[num][1]=j;
			}
		}
		long long int cnt=0;
		for(int i=1;i<n*n;i++)
		{
			cnt+=abs(a[i+1][0]-a[i][0])+abs(a[i+1][1]-a[i][1]);
		}
		cout << cnt << endl;
	}
	return 0;
}