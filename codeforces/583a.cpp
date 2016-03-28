#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h[52],v[52],x,y;
	cin >> n;
	memset(h,0,sizeof(h));
	memset(v,0,sizeof(v));
	for(int i=1;i<=(n*n);i++)
	{
		cin >> x >> y;
		if(h[x]==0 && v[y]==0)
		{
			cout << i << " ";
			h[x]=1;
			v[y]=1;
		}
	}
	return 0;
}