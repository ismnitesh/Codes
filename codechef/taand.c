#include<stdio.h>
int main()
{
	int n,a[300004],i,j;
	long long int max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i] & a[j])>max)
				max=(a[i] & a[j]);
		}
	}
	printf("%d",max);
	return 0;
}