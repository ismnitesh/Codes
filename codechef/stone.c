#include<stdio.h>
#include<conio.h>
int main()
{
	long int n,i;
	long long int k;
	scanf("%ld",&n);
	scanf("%lld",&k);
	int a[n],b,max=-99999999;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];
	}
	while(k--)
	{
		b=-999999999;
		for(i=0;i<n;i++)
		{
			a[i]=max-a[i];
			if(b<a[i])
				b=a[i];
		}
		max=b;
	}
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		printf("%d ",a[i]);
		else
		printf("%d",a[i]);
	}
	getch();
	return 0;
}
