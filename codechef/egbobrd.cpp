#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,k,i,sum,num;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		sum=0;
		for(i=0;i<n;i++)
		{
			cin >> num;
			sum+=num;
			if(sum%k)
				sum++;
		}
		if(sum%k)
			cout << sum/k+1 << endl;
		else
			cout << sum/k << endl;
	}
	return 0;
}