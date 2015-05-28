#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long long int t,x,ans,n;
	cin >> t;
	while(t--)
	{
		ans=0;
		cin >> n;
		if(n==1)
		{
			cout << "1" << endl;
			continue;
		}
		x=sqrt(n);
		for(int i=1;i<=x;i++)
			if(n%i==0)
			{
				if(i!=n/i)
					ans+=i+n/i;
				else
					ans+=i;
			}
		cout << ans << endl;
	}
	return 0;
}