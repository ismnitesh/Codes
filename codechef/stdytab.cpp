#include <bits/stdc++.h>
using namespace std;
int ncr[4005][4005],dp[2005][2005],ans[2005];
int main()
{
	int i,j;
	for(i=0;i<4005;i++)
	{
		ncr[i][i]=1;
		ncr[i][0]=1;
	}
	for(i=1;i<4005;i++)
		for(j=1;j<i;j++)
			ncr[i][j]=ncr[i-1][j]+ncr[i-1][j-1];

	ans[0]=1;
	for(i=1;i<=m;i++)
	{
		ans[i]=ncr[m-1+i][i];
	}	
	dp[1][m]=ans[m];
	for(i=m-1;i>=0;i--)
	{
		dp[1][i]=(dp[1][i+1]+ans[i])%mod;
	}
	for(i=2;i<=n;i++)
	{
		for(j=m;j>=0;j--)
		{
			if(j==m)
			dp[i][j]=(dp[i-1][m]*ans[j])%mod;
			else
			dp[i][j]=(((dp[i-1][j]*ans[j])%mod)+dp[i][j+1])%mod;
		}
	}
	cout << dp[n][0];
}





#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000000
ll min(ll a,ll b)
{
	return a<b?a:b;
}
ll ans[2003],sum[2003],table[2003][2003],C[4003][2003];

ll find_coeff(ll n ,ll k)
{
	ll i,j;
    for (i = 0; i <= n; i++)
    {
        for (j=0;j<=min(i,k);j++)
        {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = (C[i-1][j-1] + C[i-1][j])%mod;
        }
    }
}
ll binomial(ll n,ll m)
{
	ll i,j;
	find_coeff(2*m,m);
	ans[0]=1;
	for(i=1;i<=m;i++)
	{
		ans[i]=C[m-1+i][i];
	}	
	table[1][m]=ans[m];
	for(i=m-1;i>=0;i--)
	{
		table[1][i]=(table[1][i+1]+ans[i])%mod;
	}
	for(i=2;i<=n;i++)
	{
		for(j=m;j>=0;j--)
		{
			if(j==m)
			table[i][j]=(table[i-1][m]*ans[j])%mod;
			else
			table[i][j]=(((table[i-1][j]*ans[j])%mod)+table[i][j+1])%mod;
		}
	}
	return table[n][0];

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,i;
		cin>>n>>m;
		cout<<binomial(n,m)<<endl;
	}
}