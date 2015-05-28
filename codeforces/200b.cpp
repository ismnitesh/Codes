#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	double num,sum=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> num;
		sum+=num;
	}
	cout << sum/(double)n;
	return 0;
}