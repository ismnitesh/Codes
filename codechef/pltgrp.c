#include<stdio.h>
int main()
{
	int n,a[100004],i,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	count=0;
	for(i=1;i<n-1;i++)
	{
		if(a[i]<a[i-1] && a[i+1]>a[i-1])
		{
			a[i]=a[i-1];
			count++;
		}
		else if(a[i-1]>a[i+1] && a[i]<a[i+1])
		{
			count++;
			a[i-1]=a[i-2];
		}
	}
	printf("%d\n",n-count);
	return 0;
}