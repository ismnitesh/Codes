#include<stdio.h>
int main()
{
	int i,j,n,m,count,k;
	char a[103][103];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
			scanf("%s",a[i]);
	if(n==1)
		printf("0");
	else
	{
			count=0;
			for(k=0;k<m;k++)
			for(j=0;j<n-1;j++)
			{
				if(strcmp(a[j],a[j+1])==-1)
				{
					printf("%d\n",j);
					count++;
					for(i=0;i<m;i++)
						a[i][k]='a';
					break;
				}
			}
		printf("%d",count);
	}
	return 0;
}