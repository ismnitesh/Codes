#include <iostream>
using namespace std;
int main()
{
	long long int n,k,odd;
	cin >> n >> k;
	if(n%2)
		odd=n/2+1;
	else
		odd=n/2;
	if(k<=odd)
		cout << 2*k-1;
	else
		cout << 2*(k-odd);
	return 0;
}