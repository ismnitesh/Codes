#include <bits/stdc++.h>
using namespace std;
int fun(int n)
{
	int ans=0;
	int temp=5;
	while(1)
	{
		if(!floor(n/temp))
			break;
		ans=ans+floor(n/temp);
		temp*=5;
	}
	return ans;
}
int main()
{
	int m;
	cin >> m;
	int cnt=0;
	int i;
	for(i=5;;i+=5)
	{
		cnt=fun(i);
		if(cnt>=m)
			break;
	}
	if(cnt==m)
	{
		cout << "5\n";
		for(int j=0;j<5;j++)
			cout << i+j << " ";
	}
	else
		cout << "0";
	return 0;
}