#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,k,q,j,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		k=sqrt(n);
		q=n%k;
		while(q!=0)
		{
			k--;
			q=n%k;
		}
		j=n/k;
		ans=j-k;
		printf("%d\n",ans);
	}
	return 0;
}