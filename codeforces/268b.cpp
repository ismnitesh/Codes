#include <iostream>
using namespace std;
int main()
{
	int n,sum=1;
	cin >> n;
	for(int i=n;i>1;i--)
		sum+=i+(i-1)*(n-i);
	cout << sum;
	return 0;
}