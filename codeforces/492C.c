#include<stdio.h>
long long int a[100005][2];
void merge(long long int l,long long int m,long long int r)
{
	long long int n1,n2;
	n1=m-l+1;
	n2=r-m;
	long long int b[n1][2],c[n2][2],i,j,k;
	for(i=0;i<n1;i++)
	{
		b[i][0]=a[l+i][0];
		b[i][1]=a[l+i][1];
	}
	for(j=0;j<n2;j++)
	{
		c[j][0]=a[m+1+j][0];
		c[j][1]=a[m+1+j][1];
	}
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2)
	{
		if(b[i][1]<=c[j][1])
		{
			a[k][1]=b[i][1];
			a[k][0]=b[i][0];
			i++;
		}
		else
		{
			a[k][0]=c[j][0];
			a[k][1]=c[j][1];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k][0]=b[i][0];
		a[k][1]=b[i][1];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k][0]=c[j][0];
		a[k][1]=c[j][1];
		j++;
		k++;
	}
}
void mergesort(long long int l,long long int r)
{
	if(l<r)
	{
		long long int m=l+(r-l)/2;
		mergesort(l,m);
		mergesort(m+1,r);
		merge(l,m,r);
	}
}
int main()
{
	long long int n,r,avg,i,sum=0,count=0;
	scanf("%lld%lld%lld",&n,&r,&avg);
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld",&a[i][0],&a[i][1]);
		sum=sum+a[i][0];
	}
	long long int need=(n*avg)-sum;
	//prlong long intf("ned==%d\n", need);
	if(need>0)
	{
		mergesort(0,n-1);
		long long int j=0;
		while(need>0)
		{
			if(a[j][0]<r)
			{
				if(((n*avg)-(sum-a[j][0]+r))>=0)
				{
					need=need-(r-a[j][0]);
					count+=(r-a[j][0])*a[j][1];
					sum=sum-a[j][0]+r;
					a[j][0]=r;
				}
				else
				{
					count=count+need*a[j][1];
					need=0;
				}
			}
			j++;
		}
		printf("%lld\n",count);

	}
	else
	{
		printf("0\n");
	}
	

	return 0;
}