#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,cnt=0;
	cin >> k >> l;
	while(l%k==0)
	{
		l/=k;
		cnt++;
	}
	if(l==1)
	{
		cout << "YES" << endl;
		cout << cnt-1;
	}
	else
		cout << "NO";
	return 0;
}