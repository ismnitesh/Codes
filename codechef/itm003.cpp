#include <iostream>
using namespace std;
int main()
{
	int t,n,cnt;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cnt=0;
		while(n)
		{
			if(n%2)
				cnt++;
			n/=2;
		}
		cout << cnt << endl;
	}
	return 0;
}