#include <iostream>
using namespace std;
int main()
{
	int n,m,ans;
	cin >> n >> m;
	ans=n;
	while(n>=m)
	{
		ans+=n/m;
		n=(n%m)+(n/m);
	}
	cout << ans;
	return 0;
}