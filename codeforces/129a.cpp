#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,odd=0,even=0,num;
	cin >> n;
	while(n--)
	{
		cin >> num;
		if(num%2)
			odd++;
		else
			even++;
		sum+=num;
	}
	if(sum%2)
		cout << odd;
	else
		cout << even;
	return 0;
}