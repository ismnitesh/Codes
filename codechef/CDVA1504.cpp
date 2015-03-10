#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,l;
	char s[10005];
	cin >> t;
	t++;
	while(t--)
	{
		gets(s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]<='9' && s[i]>='0')
				continue;
			else
				cout << s[i];
		}
		printf("\n");
	}
	return 0;
}