#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,cnt=0,w1,w2;
	cin >> n >> m;
	while(n--)
	{
		for(int i=0;i<m;i++)
		{
			cin >> w1 >> w2;
			if(w1==1 || w2==1)
				cnt++;
		}
	}
	cout << cnt;
	return 0;
}