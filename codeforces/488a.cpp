#include <bits/stdc++.h>
using namespace std;
bool check(long long int n)
{
	if(n<0)
		n=-n;
	while(n)
	{
		if(n%10==8)
			return true;
		n/=10;
	}
	return false;
}
int main()
{
	long long int n,cnt=0;
	cin >> n;
	n++;
	cnt++;
	while(1)
	{
		if(check(n))
		{
			cout << cnt;
			return 0; 
		}
		n++;
		cnt++;
	}
}