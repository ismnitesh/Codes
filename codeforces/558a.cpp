#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[200005],pos=0,neg=0,sum=0,i,x,val;
	cin >> n;
	memset(a,0,sizeof(a));
	while(n--)
	{
		cin >> x >> val;
		a[x+100000]=val;
		if(x>0)
			pos++;
		else
			neg++;
		sum+=val;
	}
	if(pos-neg>1)
	{
		int cnt = pos-neg;
		cnt--;
		for(i=200000;i>=0;i--)
		{
			if(cnt && a[i])
			{
				sum-=a[i];
				cnt--;
			}
		}
	}
	else if(neg-pos>1)
	{
		int cnt=neg-pos;
		cnt--;
		for(i=0;i<=100000;i++)
		{
			if(cnt && a[i])
			{
				sum-=a[i];
				cnt--;
			}
		}
	}
	cout << sum;
	return 0;
}