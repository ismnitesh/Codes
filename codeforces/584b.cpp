#include<bits/stdc++.h>
using namespace std;
long long int m=1000000007;
long long int powmod(int a,int b)
{
	long long int ans=1,d=a;
	while(b)
	{
		if(b&1)	ans=(ans*d)%m;
		d=(d*d)%m;
		b/=2;
	}
	return ans;
}
int main()
{
	int n;
	cin >> n;
	long long int x=powmod(3,3*n);
	long long int y=powmod(7,n);
	x=(x-y)%m;
	x=(x+m)%m;
	cout << x <<endl;
	return 0; 
}