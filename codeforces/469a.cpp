#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,num,i,a[103],p;
	cin >> n;
	cin >> p;
	memset(a,0,sizeof(int)*103);
	while(p--)
	{
		cin >> num;
		a[num]=1;
	}
	cin >> p;
	while(p--)
	{
		cin >> num;
		a[num]=1;
	}
	int flag=1;
	for(i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			flag=0;
			break;
		}
	}
	if(flag)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
		return 0;
}