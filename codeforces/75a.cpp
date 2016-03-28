#include <bits/stdc++.h>
using namespace std;
long long int rm_zero(long long int x)
{
	long long int ans=0,z=1;
	while(x)
	{
		if(x%10!=0){
			ans=ans+((x%10)*z);
			z*=10;
		}
		x/=10;
	}
	return ans;
}
int main()
{
	long long int a,b;
	cin >> a >> b;
	if(rm_zero(a)+rm_zero(b)==rm_zero(a+b))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}