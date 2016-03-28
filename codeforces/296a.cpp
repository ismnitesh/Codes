#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[1001],max=0,num;
	cin >> n;
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++)
	{
		cin >> num;
		a[num]++;
		if(a[num]>max)
			max=a[num];
	}
	if(n%2==0)
		n/=2;
	else
		n=n/2+1;
	if(n>=max)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}