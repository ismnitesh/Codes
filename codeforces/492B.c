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
	int n,l,a[1005],i;
	float diff,x;
	scanf("%d%d",&n,&l);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	diff=0;
	for(i=1;i<n;i++)
	{
		if((a[i]-a[i-1])>diff)
		{
			diff=a[i]-a[i-1];
		}
	}
	if(2*(a[0]-0)>diff && (a[0]-0)>(l-a[n-1]))
	{
		x=(a[0]-0);
		printf("%.9f",x);
	}
	else if(2*(l-a[n-1])>diff && (a[0]-0)<(l-a[n-1]))
	{
		x=(l-a[n-1]);
		printf("%.9f",x);
	}
	else
		printf("%.9f",diff/2);
	return 0;
}