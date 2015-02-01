#include<stdio.h>
#include<math.h>
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
	int t,i,j,count,a[100005],n,f,index;
	long long int ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&f);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		mergesort(a,0,n-1);
		ans=0;
		for(i=0;i<n-1;i++)
		{
			index=0;
			count=0;
			for(j=i+1;j<n;j++)
			{
				if(a[j]>(a[i]*pow(f,index)))
					index++;
				if(a[j]==(a[i]*pow(f,index)))
					count++;
			//	printf("count: %d\n",count);
			//	printf("index: %d\n",index);
			}
			ans=ans+count;
		}
		printf("%lld\n",ans);
	}
	return 0;
}