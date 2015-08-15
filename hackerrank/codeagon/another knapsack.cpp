#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,cnt=0;
	cin >> n >> m;
	if(m>(n*(n+1))/2)
		cout << "-1";
	else
	{
		for(int i=n;i>0;i--)
		{
			if(m>=i)
			{
				m-=i;
				cnt++;
			}
			if(m==0)
				break;
		}
		cout << cnt;
	}
	return 0;
}