#include <bits/stdc++.h>
using namespace std;
int v[100004],v1[100005];
int bin(int x,int min,int max)
{
	if(max>=min)
	{
		int mid=min+(max-min)/2;
		if(v[mid]==x)
			return mid;
		else if(v[mid]>x)
			return bin(x,min,mid-1);
		else
			return bin(x,mid+1,max);
	}
}
int main()
{
	int t,n,m,max_dist,i,x,y,j;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> m;
			max_dist=-1000000000;
			while(m--)
			{
				cin >> x >> y;
				if(x>max_dist)
					max_dist=x;
			}
			v[i]=max_dist;
			v1[i]=max_dist;
		}
		sort(v,v+n);
		for(i=0;i<n;i++)
			cout << bin(v1[i],0,n-1) << " ";
		cout << endl;
	}
	return 0;
}