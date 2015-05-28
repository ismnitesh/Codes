#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100004],cnt=1,i,j;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	i=0;
	j=0;
	while(j<n)
	{
		while(a[j]<=a[i]+4)
			j++;
		if(j<n)
			cnt++;
		i=j;
	}
	cout << cnt;
	return 0;
}