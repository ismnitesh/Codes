#include<stdio.h>
int main()
{
	int t,n,a[104],inv=0,linv=0,i,j;
	scanf("%d",&t);
	while(t--)
	{
		inv=0;
		linv=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=1;j<n;j++)
		{
			for(i=0;i<j;i++)
			{
				if(a[i]>a[j])
				{
					inv++;
				}
			}
			if(a[j]<a[j-1])
			{
				linv++;
			}
		}
		if(inv==linv)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}