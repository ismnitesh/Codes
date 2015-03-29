#include <iostream>
using namespace std;
long long int a[10000];
int main()
{
	long long int t,n,k,l,i;
	cin >> t;
	while(t--)
	{
		cin >> n >> k >> l;
		l--;
		for(i=0;i<n;i++)
		{
			a[i]=(l%k)+1;
			l=l/k;
		}
		for(i=n-1;i>=0;i--)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}