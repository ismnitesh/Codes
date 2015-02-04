#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,i;
	char s[100007];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		scanf("%s",s);
		int max=0;
		int flg=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='.')
				max=0;
			else
				max++;
			if(max==k)
			{
				flg=1;
				break;
			}
		}
		if(flg)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}