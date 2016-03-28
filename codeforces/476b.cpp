#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin >> a >> b;
	int val=0,v1=0,cnt=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='+')
			val++;
		else if(a[i]=='-')
			val--;
		if(b[i]=='+')
			v1++;
		else if(b[i]=='-')
			v1--;
		else if(b[i]=='?')
			cnt++;
	}
	int diff=val-v1;
	int x=0,flag=0;
	for (int i = 0; i <= cnt; i++)
	{
		if(cnt-i-i==diff)
		{
			x=i;
			flag=1;
			break;
		}
	}
	double ans;
	if(diff==0 && flag==0)
		ans=1;
	else if(flag==0 && diff!=0)
		ans=0;
	else
	{
		ans=1;
		for(int i=1;i<=cnt;i++)
			ans=ans*i;
		for(int i=1;i<=x;i++)
			ans=ans/i;
		for(int i=1;i<=(cnt-x);i++)
			ans=ans/i;
		for(int i=0;i<cnt;i++)
			ans=ans/2;
	}
	printf("%0.12lf",ans);
	return 0;
}