#include<stdio.h>
void merge(int a[],int l,int m,int r)
{
	int n1,n2;
	n1=m-l+1;
	n2=r-m;
	int b[n1],c[n2],i,j,k;
	for(i=0;i<n1;i++)
		b[i]=a[l+i];
	for(j=0;j<n2;j++)
		c[j]=a[m+1+j];
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2)
	{
		if(b[i]<=c[j])
		{
			a[k]=b[i];
			i++;
		}
		else
		{
			a[k]=c[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=b[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=c[j];
		j++;
		k++;
	}
}
void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}
int main()
{
	int t,n,m,i,a[10004];
	long long sum1,sum2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		mergesort(a,0,n-1);
		sum1=0;
		sum2=0;
		for(i=0;i<n;i++)
		{
			if(i<m)
				sum1=sum1+a[i];
			else
				sum2=sum2+a[i];
		}
		printf("%lld\n",sum2-sum1);
	}
	return 0;
}