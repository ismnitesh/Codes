#include<bits/stdc++.h>
using namespace std;
long long int a[5000003];
int main()
{
	long long int t,n,x;
	cin >> t;
	for(int i=1;i<5000001;i++)
		a[i]=i*i;
	while(t--)
	{
		cin >> n;
		int flag=1;
		x=n*n;
		int i=1,j=n;
		while(i<=j)
		{
			if(a[i]+a[j]==x)
			{
				flag=0;
				cout << "YES\n";
				break;
			}
			else if(a[i]+a[j]>x)
				j--;
			else i++;
		}
		if(flag)
			cout << "NO\n";
	}
	return 0;
}