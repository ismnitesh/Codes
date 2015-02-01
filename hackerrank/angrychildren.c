#include<stdio.h>
int main()
{
	int n,k,x,i,j;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				x=a[j];
				a[j]=a[i];
				a[i]=x;
			}
		}
	}
	printf("%d",a[k-1]-a[0]);
	return 0;
}