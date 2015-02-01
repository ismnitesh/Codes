#include<stdio.h>
int main()
{
	int n,t,i,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	t=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
				t++;
			}
		}
	}
	printf("%d\n",t);
	return 0;
}