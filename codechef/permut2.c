#include<stdio.h>
int main()
{
	int n,a[100005],flag,i;
	while(1)
	{
		scanf("%d",&n);
		flag=1;
		if(n==0)
			break;
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(i=1;i<=n;i++)
		{
			if(a[a[i]]!=i)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");
	}
	return 0;
}