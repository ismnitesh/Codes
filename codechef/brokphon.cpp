#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int t,a[100002],f[100002],count,i,n;
	cin >> t;
	while(t--)
	{
		count=0;
		cin >> n;
		for(i=0;i<n;i++)
			cin >> a[i];
		memset(f,0,n*sizeof(int));
		for(i=0;i<n-1;i++)
		{
			if(a[i]!=a[i+1])
			{
				f[i]=1;
				count++;
			}
		}
		for(i=1;i<n;i++)
		{
			if(a[i]!=a[i-1] && f[i]==0)
			{
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}