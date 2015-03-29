#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a,b,ans;
	cin >> a >> b;
	while(a!=(-1) && b!=(-1))
	{
		float x=a<b?a:b;
		ans=ceil((a+b-x)/(x+1));
		cout << ans << endl;
		cin >> a >> b;
	}
	return 0;
}