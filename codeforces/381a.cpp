#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[1004],p1=0,p2,s=0,d=0;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	p2=n-1;
	while(n)
	{
		if(a[p1]>a[p2])
		{
			s+=a[p1];
			p1++;
			n--;
		}
		else
		{
			s+=a[p2];
			p2--;
			n--;
		}
		if(n==0)
			break;
		if(a[p1]>a[p2])
		{
			d+=a[p1];
			p1++;
			n--;
		}
		else
		{
			d+=a[p2];
			p2--;
			n--;
		}
	}
	cout << s << " " << d;
	return 0;
}