#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,num,f=0;
	cin >> n;
	while(n--)
	{
		cin >> num;
		if(num==1)
			f=1;
	}
	if(f)
		cout << "-1";
	else
		cout << "1";
	return 0;
}