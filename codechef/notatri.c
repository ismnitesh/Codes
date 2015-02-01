#include<stdio.h>
#include<stdlib.h>
int a[2005];
int comp(const void *a,const void *b)
{
	return (*(int *)a - *(int *)b);
}
int binary(int sum,int j,int n)
{
	if(a[n]<=sum) 
		return 0;
	if(a[j]>sum) 
		return j;
 
	int i=(j+n)/2;
	if(j==i) 
	{
		return n;
	}
	if(a[i]<=sum)
	{ 
		if(a[i+1]>sum)
			return i+1; 
	    return binary(sum,i,n);
	}
	else 
		return binary(sum,j,i);	
}
int main()
{
	int i;
	while(1)
	{
		int n,ans=0,j,x;
		scanf("%d",&n);
		if(n==0)
			break;
		else
		{
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
			qsort(a,n,sizeof(int),comp);
			ans=0;
			for(i=0;i<n-2;i++)
			{
				for(j=i+1;j<n-1;j++)
				{
					x=(binary(a[i]+a[j],j+1,n-1));
				 	if(x)
				 		ans+=(n-x);	
				}
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}