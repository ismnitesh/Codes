#include<stdio.h>
int main()
{
	int n,m,num,i,j,flag;
	scanf("%d",&m);
	scanf("%d",&n);
	flag=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&num);
			if(num==n)
				flag=1;
		}
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}