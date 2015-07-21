#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[100004],b[100004];
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	int l=0,r=0;
	for(i=0;i<n;i++){
		if(a[i]!=b[i])
		{
			l=i;
			break;
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!=b[i])
		{
			r=i;
			break;
		}
	}
	if(l==0 && r==0)
	{
		cout << "yes"<< endl;
		cout << "1 1";
	}
	else
	{
		int f=1;
		for(i=l;i<r;i++)
		{
			if(a[i]!=b[r+l-i])
			{
				f=0;
				break;
			}
		}
		if(f)
		{
			cout << "yes" << endl;
			cout << l+1 << " " << r+1;
		}
		else
			cout << "no";
	}
	return 0;
}