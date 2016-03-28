#include <iostream>
using namespace std;
int main()
{
	long long int t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		if(((n+1)&(n))!=0)
			cout << "-1" << endl;
		else if(n==1)
			cout << "2" << endl;
		else
		{
			n>>=1;
			cout << n << endl;
		}
	}
	return 0;
}