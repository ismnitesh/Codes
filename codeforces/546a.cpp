#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int k,n,w,ans;
	cin >> k >> n >> w;
	ans=(k*(w+1)*w)/2;
	ans-=n;
	if(ans>0)
		cout << ans;
	else
		cout << "0";
}