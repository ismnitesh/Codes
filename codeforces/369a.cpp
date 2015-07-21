#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,cnt_1=0,cnt_2=0,num,i;
	cin >> n >> m >> k;
	for(i=0;i<n;i++)
	{
		cin >> num;
		if(num==1)
			cnt_1++;
		else
			cnt_2++;
	}
	if(m>=cnt_1)
	{
		m-=cnt_1;
		cnt_1=0;
	}
	else
	{
		cnt_1-=m;
		m=0;
	}
	k+=m;
	int ans=cnt_1;
	if(k<cnt_2)
		ans+=cnt_2-k;
	cout << ans;
	return 0;
}