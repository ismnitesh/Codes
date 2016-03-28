#include<bits/stdc++.h>
using namespace std;
long long int chk(long long int x)
{
	long long int cnt=0;
	while(x)
	{
		if(x%10==4 || x%10==7)
			cnt++;
		x/=10;
	}
	return cnt;
}
int main()
{
	long long int n,k,num,cnt=0;
	cin >> n >> k;
	while(n--)
	{
		cin >> num;
		if(chk(num)<=k)
			cnt++;
	}
	cout << cnt;
	return 0;
}