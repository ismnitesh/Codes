#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,a[105],flag,last;
	cin >> n >> m;
	for(i=1;i<=n;i++)
		cin >> a[i];
	flag=1;
	while(1)
	{
		if(flag==0)
			break;
		flag=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]>0)
			{
				flag=1;
				a[i]-=m;
				last=i;
			}
		}
	}
	cout << last;
	return 0;
}