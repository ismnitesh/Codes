#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,cnt=0;
	cin >> n >> x;
	int i=1,j=n;
	while(i<j)
	{
		if(i*j<x)
			i++;
		else if(i*j>x)
			j--;
		else
		{
			cnt++;
			i++;
			j--;
		}
	}
	cnt*=2;
	if(i*i==x)
		cnt++;
	cout << cnt;
	return 0;
}