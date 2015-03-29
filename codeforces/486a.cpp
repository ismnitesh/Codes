#include <iostream>
using namespace std;
int main()
{
	long long int n,ans;
	cin >> n;
	if(n%2==0)
		ans=0;
	else
		ans=(-n);
	ans+=(n/2);
	cout << ans;
	return 0;
}