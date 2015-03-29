#include <iostream>
using namespace std;
int main()
{
	int n,a[102],i,num;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> num;
		a[num]=i;
	}
	for(i=1;i<=n;i++)
		cout << a[i] << " ";
	return 0;
}