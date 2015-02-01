#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1006],i,t,n,max,val_min;
	cin >> t;
	while(t--)
	{
		max=INT_MIN;
		cin >> n;
		for(i=0;i<n;i++)
			cin >> a[i];
		val_min=a[0];
		for(i=1;i<n;i++)
		{
			if((a[i]-val_min)>max)
				max=a[i]-val_min;
			if(a[i]<val_min)
				val_min=a[i];
		}
		cout << max << endl;
	}
	return 0;
}