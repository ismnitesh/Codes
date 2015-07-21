#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,num,i,j,k;
	char s[105];
	cin >> s;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]=='0')
		{
			cout << "YES\n0";
			return 0;
		}
		if(s[i]=='8')
		{
			cout << "YES\n8";
			return 0;
		}
	}
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			num=(s[i]-'0')*10+s[j]-'0';
			if(num%8==0)
			{
				cout << "YES\n";
				cout << num;
				return 0;
			}
		}
	}
	for(i=0;i<l-2;i++)
	{
		for(j=i+1;j<l-1;j++)
		{
			for(k=j+1;k<l;k++)
			{
				num=(s[i]-'0')*100+(s[j]-'0')*10+s[k]-'0';
				if(num%8==0)
				{
					cout << "YES\n";
					cout << num;
					return 0;
				}
			}
		}
	}
	cout<<"NO";
	return 0;
}