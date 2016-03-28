#include <bits/stdc++.h>
using namespace std;
int main()
{
	int j,s,m;
	cin >> j >> s >> m;
	int ans=(m-j)/s;
	if(ans%2==0)
		cout << "Lucky Chef";
	else
		cout << "Unlucky Chef";
	return 0;
}