#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a,b,c,ans;
	cin >> n >> a >> b >> c;
	if(a<=(b-c))
		ans=n/a;
	else{
		ans=(n-b)/(b-c);
		ans++;
	}
	cout << ans;
	return 0;
}