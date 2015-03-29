#include <iostream>
using namespace std;
int lucky(int num)
{
	int x;
	while(num)
	{
		x=num%10;
		if(x!=4 && x!=7)
			return 0;
		num/=10;
	}
	return 1;
}
int main()
{
	int n,i;
	cin >> n;
	if(lucky(n))
	{
		cout << "YES";
		return 0;
	}
	for(i=4;i<=n;i++)
	{
		if(n%i==0)
		{
			if(lucky(i))
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}