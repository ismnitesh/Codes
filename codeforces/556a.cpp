#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt_0=0,cnt_1=0,i;
	string s;
	cin >> n;
	cin >> s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='0')
			cnt_0++;
		else
			cnt_1++;
	}
	cout << abs(cnt_0-cnt_1);
	return 0;
}