#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,n,num,flag=0,a[300],ans,i;
	memset(a,-1,sizeof(a));
	scanf("%d%d",&p,&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		if(a[num%p]==-1)
			a[num%p]=num;
		else if(a[num%p]!= -1 && flag==0)
		{
			flag=1;
			ans=i;
		}
	}
	if(flag)
		printf("%d",ans);
	else
		printf("-1");
	return 0;
}