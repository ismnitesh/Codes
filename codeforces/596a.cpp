#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x[4],y[4],x_diff,y_diff;
	cin >> n;
	if(n==1)
	{
		for(int i=0;i<n;i++)
			cin >> x[i] >> y[i];
		cout<< "-1";
	}
	else if(n==2)
	{
		for(int i=0;i<n;i++)
			cin >> x[i] >> y[i];
		if(x[0]==x[1] || y[0]==y[1])
			cout << "-1";
		else
			cout << abs((x[0]-x[1])*(y[0]-y[1]));
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			cin >> x[i] >> y[i];
			if(x[i]-x[0]!=0)
				x_diff=x[i]-x[0];
			if(y[i]-y[0]!=0)
				y_diff=y[i]-y[0];
		}
		cout << abs(x_diff*y_diff);
	}
	return 0;
}