#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,a[302];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
		s+=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==0 && i!=n-1)
			cout << "R";
		else if(a[i]>0 && i!=n-1)
		{
			while(a[i]>1)
			{
				cout << "PRL";
				a[i]--;
			}
			cout << "PR";
		}
		else if(i==n-1 && a[i]>0)
		{
			while(a[i]>1)
			{
				cout << "PLR";
				a[i]--;
			}
			cout << "P";
		}
	}
	return 0;
}