#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,len;
	char a[11];
	cin >> a;
	len=strlen(a);
	if(a[0]!='-')
		cout << a;
	else if(len==3 && a[0]=='-' && (a[1]=='0' || a[2]=='0'))
	{
		cout << "0";
		return 0;
	}
	else
	{
		if(a[len-1]>a[len-2])
		{
			for(i=0;i<len-1;i++)
				cout << a[i];
		}
		else
		{
			for(i=0;i<len;i++)
			{
				if(i!=len-2)
					cout << a[i];
			}
		}
	}
	return 0;
}