#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,flag,i;
	char a[1005][105],s[105];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%s",a[i]);
		scanf("%s",s);
		flag=0;
		for(i=0;i<n;i++)
		{
			if(!strcmp(a[i], s))
			{
				flag=1;
				break;
			}
		}
		if(flag)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}