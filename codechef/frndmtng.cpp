#include <bits/stdc++.h>
using namespace std;
int main()
{
	double t,t1,t2,x1,x2,total,a1,a2,req,ans;
	cin >> t;
	while(t--)
	{
		cin >> t1 >> t2 >> x1 >> x2;
		if(x1>t1)
			x1=t1;
		if(x2>t2)
			x2=t2;

		total=t1*t2;
		a1=(t1/t2)*(t2-x2)*(t2-x2)/2;
		a2=(t2/t1)*(t1-x1)*(t1-x1)/2;
		req=total-a1-a2;
		ans=req/total;
		cout << ans << endl;
	}
	return 0;
}