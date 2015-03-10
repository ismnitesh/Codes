#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,y,k,n,p,c;
	scanf("%d",&t);
	while(t--)
	{
		int flag=0;
		scanf("%d%d%d%d",&x,&y,&k,&n);
		while(n--)
		{
			scanf("%d%d",&p,&c);
			if(c<=k && p>=(x-y))
				flag=1;
		}
		if(flag)
			printf("LuckyChef\n");
		else
			printf("UnluckyChef\n");
	}
	return 0;
}