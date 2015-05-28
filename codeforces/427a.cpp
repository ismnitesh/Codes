#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,crime=0,police=0,num;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> num;
		if(num>0)
			police+=num;
		else if(num<0 && police>0)
			police--;
		else if(num<0 && police==0)
			crime++;
	}
	cout << crime;
	return 0;
}