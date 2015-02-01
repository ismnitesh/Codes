#include<stdio.h>
#include<string.h>
int main()
{
	int n,t,i,j,k,max=0,count=0;
	char a[303][103];
	scanf("%d%d",&n,&t);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	int c[1004]={0};
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			int total=0;
			for(k=0;k<t;k++)
			{
				if(a[i][k]=='1' || a[j][k]=='1')
				{
					c[k]=1;
				}
				if(c[k]==1)
				{
					total++;
				}
			}
			if(total>max)
			{
				max=total;
				count=1;;
			}
			else if(total==max)
				count++;
		}
	}
	printf("%d\n%d\n",max,count);
	return 0;
}
