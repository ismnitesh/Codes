#include <bits/stdc++.h>
using namespace std;
char flip(char x)
{
	if(x=='0')
		return '1';
	else
		return '0';
}
int main()
{
	int t,n,k,i;
	char a[100004];
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		cin >> a;
		if(k==1)
		{
			int ans1=0,ans2=0;
			for(i=0;i<n;i++)
			{
				if(i%2 && a[i]=='0')
					ans1++;
				if(i%2==0 && a[i]=='1')
					ans1++;
				if(i%2 && a[i]=='1')
					ans2++;
				if(i%2==0 && a[i]=='0')
					ans2++;
			}
			if(ans1<ans2)
			{
				cout << ans1 << endl;
				for(i=0;i<n;i++)
				{
					if(i%2==0)
						cout << "0";
					else
						cout << "1";
				}
				cout << endl;
			}
			else
			{
				cout << ans2 << endl;
				for(i=0;i<n;i++)
				{
					if(i%2==0)
						cout << "1";
					else
						cout << "0";
				}
				cout << endl;
			}
		}
		else
		{
			int count=1,ans=0;
			for(i=1;i<n;i++)
			{
				if(a[i]!=a[i-1])
					count=1;
				if(a[i]==a[i-1])
					count++;
				if(count==k+1)
				{
					ans++;
					count=1;
					if(a[i]==a[i+1])
						a[i]=flip(a[i]);
					else
						a[i-1]=flip(a[i-1]);
				}
			}
			cout << ans << endl;
			for(i=0;i<n;i++)
				cout << a[i];
			cout << endl;
		}
	}
	return 0;
}