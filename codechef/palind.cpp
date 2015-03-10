#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,l,i,a_cost,b_cost;
	char s[10004];
	scanf("%d",&t);
	while(t--)
	{
		int flag=0,ans=0;
		scanf("%s",s);
		l=strlen(s);
		scanf("%d%d",&a_cost,&b_cost);
		for(i=0;i<l/2;i++)
		{
			if(s[i]=='/' && s[l-i-1]=='a')
				ans=ans+a_cost;
			else if(s[i]=='/' && s[l-i-1]=='b')
				ans=ans+b_cost;
			else if(s[i]=='/' && s[l-i-1]=='/')
			{
				if(a_cost<b_cost)
					ans=ans+2*a_cost;
				else
					ans=ans+2*b_cost;
			}
			else if(s[i]=='a' && s[l-i-1]=='/')
				ans=ans+a_cost;
			else if(s[i]=='b' && s[l-i-1]=='/')
				ans=ans+b_cost;
			else if(s[i]!=s[l-i-1])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("-1\n");
		else
			printf("%d\n",ans);
	}
	return 0;
}