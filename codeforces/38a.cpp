#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a,b,arr[105];
	cin >> n;
	for(i=1;i<n;i++)
		cin >> arr[i];
	cin >> a >> b;
	int sum=0;
	for(i=a;i<b;i++)
		sum+=arr[i];
	cout << sum;
	return 0;
}