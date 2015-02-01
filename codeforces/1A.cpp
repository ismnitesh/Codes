#include<iostream>
using namespace std;
int main()
{
	long long int n,m,a,x,y;
	long long int ans;
	cin>>n;
	cin>>m;
	cin>>a;
	x=n/a;
	n=n%a;
	y=m/a;
	m=m%a;
	if(n>0)
		x++;
	if(m>0)
		y++;
	ans=x*y;
	cout<<ans;
	return 0;
}