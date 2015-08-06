#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else return gcd(b,a%b);
}
int main()
{
	int t,cnt,i,j,n,d;
	cin >> t;
	while(t--)
	{
		cnt=0;
		cin >> n >> d;
		for(i=1;i<=n;i++)
		{
			for(j=i;j<=n;j++)
			{
				if(gcd(i,j)==d)
					cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}