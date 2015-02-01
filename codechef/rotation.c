#include<stdio.h>
int main()
{
	int n,m,x,ind,a[100005],i;
	char c;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	ind=0;
	while(m--)
	{
		scanf(" %c",&c);
		scanf("%d",&x);
		if(c=='R')
			printf("%d\n",a[(x+ind-1)%n]);
		if(c=='A')
		{
			ind=ind-x;
			if(ind<0)
				ind=ind+n;
		}
		if(c=='C')
		{
			ind=ind+x;
			if(ind>n)
				ind=ind-n;
		}
	}
	return 0;
}