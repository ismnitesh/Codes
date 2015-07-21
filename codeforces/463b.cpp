#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,curr,energy,min_e,x;
	cin >> t;
	curr=0;
	energy=0;
	min_e=0;
	for(i=0;i<t;i++)
	{
		cin >> x;
		energy+=curr-x;
		curr=x;
		if(energy<min_e)
			min_e=energy;
	}
	cout << abs(min_e);
	return 0;
}