#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,l;
	char s[32];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		l=strlen(s);
		int ans=s[l-1]-'0';
		for(i=l-2;i>=0;i--)
		{
			if(s[i]=='+')
			{
				ans=ans+(s[i-1]-'0');
				i--;
			}
			else if(s[i]=='-')
			{
				ans=ans-(s[i-1]-'0');
				i--;
			}
			else if(s[i]=='*')
			{
				ans=ans*(s[i-1]-'0');
				i--;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}