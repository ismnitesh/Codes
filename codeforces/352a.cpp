#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt_0=0,cnt_5=0,num;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> num;
		if(num==5)
			cnt_5++;
		else
			cnt_0++;
	}
	cnt_5/=9;
	if(cnt_0==0)
		cout << "-1";
	else if(cnt_5 > 0)
	{
		for(int i=0;i<cnt_5*9;i++)
			cout << "5";
		for(int i=0;i<cnt_0;i++)
			cout << "0";
	}
	else
		cout << "0";
	return 0;
}