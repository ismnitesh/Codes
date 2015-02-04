#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a[26],i,l;
	string s;
	scanf("%d",&t);
	while(t--)
	{
		cin >> s;
		l=s.size();
		memset(a,0,sizeof(a));
		for(i=0;i<l;i++)
			a[s[i]-97]++;
		int flag=0;
		for(i=0;i<26;i++)
		{
			if(a[i]==l/2 && l%2==0)
			{
				flag=1;
				break;
			}
		}
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}