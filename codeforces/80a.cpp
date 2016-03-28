#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int n,m;
	cin >> n >> m;
	int flag=0;
	for(int i=n+1;i<m;i++)
	{
		if(isprime(i))
			flag=1;
	}
	if(flag==0 && isprime(m))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}