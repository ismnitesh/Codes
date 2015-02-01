#include<stdio.h>
int main()
{
	int n,m,i,j,a[55],t;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[j]<a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
//	for(i=0;i<m;i++)
//		printf("%d ",a[i]);
	int min=100000;
	for(i=0;(i+n-1)<m;i++)
	{
		if((a[i+n-1]-a[i])<min)
			min=a[i+n-1]-a[i];
	}
	printf("%d",min);
	return 0;
}