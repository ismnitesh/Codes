#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	char s[55];
	cin >> n;
	cin >> s;
	int flag=1,sum1=0,sum2=0;
	for(i=0;i<n;i++)
	{
		if(s[i]!='4' && s[i]!='7')
		{
			flag=0;
			break;
		}
		if(i<n/2)
			sum1+=s[i]-'0';
		else
			sum2+=s[i]-'0';
	}
	if(flag && sum1==sum2)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}