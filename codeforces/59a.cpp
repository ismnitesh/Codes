#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,count=0;
	char a[102];
	cin >> a;
	int len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
			count++;
	}
	if(count>len/2)
	{
		for(i=0;i<len;i++)
		{
			if(a[i]>='a' && a[i]<='z')
				cout << char(a[i]+'A'-'a');
			else
				cout << a[i];
		}
	}
	else
	{
		for(i=0;i<len;i++)
		{
			if(a[i]>='A' && a[i]<='Z')
				cout << char(a[i]-'A'+'a');
			else
				cout << a[i];
		}
	}
	return 0;
}