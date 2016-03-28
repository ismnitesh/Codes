#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,num,flag=0;
	cin >> n;
	long long int ans=1,cnt=0;
	while(n--)
	{
		cin >> num;
		if(num==1 && flag==0)
		{
			cnt=0;
			flag=1;
		}
		else if(num==1 && flag==1)
		{
			cnt++;
			ans=ans*cnt;
			cnt=0;
		}
		else
			cnt++;
	}
	if(flag==0)
		ans=0;
	cout << ans;
	return 0;
}