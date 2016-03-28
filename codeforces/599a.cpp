#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int d1,d2,d3,ans;
	cin >> d1 >> d2 >> d3;
	ans=d1+d2+d3;
	if(2*(d1+d2)<ans)
		ans=2*d1+2*d2;
	if(2*(d1+d3)<ans)
		ans=2*(d1+d3);
	if(2*(d2+d3)<ans)
		ans=2*(d2+d3);
	cout << ans;
	return 0;
}