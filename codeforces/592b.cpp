#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	long long int ans=1;
	ans=ans+3*(n-3);
	ans+=(n-3)*(n-4);
	cout << ans;
	return 0;
}