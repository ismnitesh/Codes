#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int n,g,i,num;
	cin >> n;
	cin >> g;
	for(i=1;i<n;i++)
	{
		cin >> num;
		g=gcd(g,num);
	}
	cout << g*n;
	return 0;
}