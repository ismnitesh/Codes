#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,bus=0,rem=0,num,i;
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		cin >> num;
		if(rem>=num)
			rem-=num;
		else
		{
			bus++;
			rem=m-num;
		}
	}
	cout << bus;
	return 0;
}