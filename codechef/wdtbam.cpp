#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,w[1003],cnt;
	string a,q;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> q;
		cin >> a;
		for(int i=0;i<=n;i++)
			cin >> w[i];
		cnt=0;
		for(int i=0;i<n;i++)
		{
			if(q[i]==a[i])
				cnt++;
		}
		if(cnt==n)
			cout << w[n] << endl;
		else
		{
			sort(w,w+cnt+1);
			cout << w[cnt] << endl;
		}
	}
	return 0;
}