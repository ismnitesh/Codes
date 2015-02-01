#include<stdio.h>
void merge(long long int a[],long long int l,long long int m,long long int r)
{
	long long int n1,n2;
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
void mergesort(long long int a[],long long int l,long long int r)
{
	if(l<r)
	{
		long long int m=l+(r-l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}
int main()
{
	long long int t,a[100007],n,k,i,k_sum,sum,ans,pre;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		k_sum=0;
		for(i=0;i<k;i++)
		{
			scanf("%lld",&a[i]);
			k_sum=k_sum+a[i];
		}
	//	qsort(a,k,sizeof(long long int),cmpfunc);
		mergesort(a,0,k-1);
		pre=0;
		sum=0;
		ans=0;
		for(i=0;i<k;i++)
		{
			sum=sum+(((a[i]-1)*a[i])/2)-(pre*(pre+1)/2);
			pre=a[i];
			if(sum<a[i])
			{
				ans=a[i];
				break;
			}
		}
		if(ans==0)
			ans=(n*(n+1)/2)-k_sum+1;
		if(ans%2==0)
			printf("Mom\n");
		else
			printf("Chef\n");
	}
	return 0;
}