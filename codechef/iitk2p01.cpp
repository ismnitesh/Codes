#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,k,sum;
	cin >> t;
	while(t--)
	{
		sum=0;
		cin >> n >> k;
		if(k==1)
			cout << n << endl;
		else
		{
			while(n)
			{
				sum=sum+(n%k);
				n=n/k;
			}
			cout << sum << endl;
		}
	}
	return 0;
}