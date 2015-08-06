#include <bits/stdc++.h>
using namespace std;
long long int t,i,k,n,a[1000004][2],ans,l,r,u,d;
int main()
{
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(i=0;i<k;i++)
			cin >> a[i][0] >> a[i][1];
		if(k==0)
			cout << n*n << endl;
		else if(k==1)
		{
			u=a[0][1]-1;
			d=n-a[0][1];
			l=a[0][0]-1;
			r=n-a[0][0];
			ans=min(l,d)+min(r,d)+min(l,u)+min(r,u)+1; 
			cout << ((n*n)-ans) << endl;
		}
		else
		{
			for(i=0;i<k;i++)
			{
				
			}
		}
	}
	return 0;
}