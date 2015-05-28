#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100004][2],count=1,max=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i][0] >> a[i][1];
		if(i>0 && a[i][0]==a[i-1][0] && a[i][1]==a[i-1][1])
			count++;
		else
			count=1;
		if(count>max)
			max=count;
	}
	cout << max;
	return 0;
}