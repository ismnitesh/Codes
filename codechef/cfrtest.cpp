#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,d[105],i,n,num,cnt;
	cin >> t;
	while(t--)
	{
		memset(d,0,sizeof(d));
		cnt=0;
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> num;
			d[num]++;
		}
		for(i=1;i<=100;i++)
		{
			if(d[i])
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}