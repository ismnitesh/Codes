#include<stdio.h>
int t,loc,a[100003];
int bin(int x)
{
	int mid,end,beg=0;
	end=t;
	mid=(beg+end/2);
	while(beg<end && a[mid]!=x)
	{
		if(x<a[mid])
		    end=mid-1;
		else
		    beg=mid+1;
		mid=(beg+end/2);
	}
	if(a[mid]=x)
	    loc=mid;
	else
	    loc=mid+1;
	return loc;
}
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
	int min,count,i,j,flag;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d",&a[i]);
	mergesort(a,0,t-1);
	min=t;
	flag=0;
	for(i=0;i<t-1;i++)
	{
		j=bin(2*a[i]);
		count=t-j+i;
		if (count<min)
			min=count;
	}
//	if(flag==0)
//		min=0;
	printf("%d\n",min);
	return 0;
}