#include <iostream>
using namespace std;
int main()
{
	int n,count=1,last,num;
	cin >> n;
	n--;
	cin >> last;
	while(n--)
	{
		cin >> num;
		if(num!=last)
		{
			last=num;
			count++;
		}
	}
	cout << count;
	return 0;
}