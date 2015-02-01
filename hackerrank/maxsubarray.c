#include<stdio.h>
int max_crossing(int a[],int low,int mid,int high)
{
	int left_sum,sum,right_sum,i,j,max_left,max_right;
	left_sum=-9999999;
	sum=0;
	for(i=mid;i>=low;i--)
	{
		sum=sum+a[i];
		if(sum>left_sum)
		{
			left_sum=sum;
			max_left=i;
		}
	}
	right_sum=-9999999;
	sum=0;
	for(j=mid+1;j<=high;j++)
	{
		sum=sum+a[j];
		if(sum>right_sum)
		{
			right_sum=sum;
			max_right=j;
		}
	}
	return(left_sum+right_sum);
}
int max_subarray(int a[],int low,int high)
{
	int mid,left_low,left_high,left_sum,right_low,right_high,right_sum,cross_low,cross_high,cross_sum;
	if(high==low)
	    return (a[low]);
	else
	{
	    mid=(low+high)/2;
	    left_sum=max_subarray(a,low,mid);
	    right_sum=max_subarray(a,mid+1,high);
	    cross_sum=max_crossing(a,low,mid,high);
	    if(left_sum>=right_sum && left_sum>=cross_sum)
	        return (left_sum);
		else if(right_sum>=left_sum && right_sum>=cross_sum)
		    return (right_sum);
		else
		 return (cross_sum);
	}
}
int max_subseq(int a[],int low,int high)
{
	int sum=-99999,i;
	for(i=low;i<=high;i++)
	{
		if(sum<0 && a[i]>sum)
			sum=a[i];
		else if(sum>=0 && sum+a[i]>sum)
			sum=sum+a[i];
	}
	return sum;
}
int main()
{
	int t,n,i,a[100005],low,high,max_sum,max_sum1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		low=0;
		high=n-1;
		max_sum=max_subarray(a,low,high);
		max_sum1=max_subseq(a,low,high);
		printf("%d %d\n",max_sum,max_sum1);
	}
	return 0;
}