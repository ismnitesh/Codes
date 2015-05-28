#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,t,curr=1,count=0,num;
	cin >> n >> t;
	while(t--)
	{
		cin >> num;
		if(curr<=num)
			count+=num-curr;
		else
			count+=n+num-curr;
		curr=num;
//		cout << count << endl;
	}
	cout << count;
	return 0;
}