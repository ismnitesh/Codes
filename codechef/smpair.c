#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		int m1,m2,i,k;
		scanf("%d",&m1);
		scanf("%d",&m2);
		if(m1<m2)
		{
			k=m1;
			m1=m2;
			m2=k;
		}
		for(i=2;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<m1)
				{
					m1=a[i];
					if(m1<m2)
					{
						k=m1;
						m1=m2;
						m2=k;
					}
				}
				else if(a[i]<m2)
					{
						m2=a[i];				
						if(m1<m2)
						{
							k=m1;
							m1=m2;
							m2=k;
						}
					}
		}
		printf("%d\n",m1+m2);
	}
	return 0;
}