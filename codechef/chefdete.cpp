#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,num;
	cin >> n;
	int a[100003];
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++)
	{
		cin >> num;
		a[num]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
			cout << i << " ";
	}
	return 0;
}