#include<stdio.h>
int main()
{
	int n,a[105],max=0,i,min=9999,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=1;j<n-1;j++)
	{
		for(i=0;i<n-2;i++)
		{
			if(i==j)
			{
				if((a[i+1]-a[i-1])>max)
					max=a[i+1]-a[i-1];	
			}
			if((i+1)==j)
			{
				if((a[i+2]-a[i])>max)
					max=a[i+2]-a[i];
			}
			else
			{
				if((a[i+1]-a[i])>max)
					max=a[i+1]-a[i];
			}
		}
		if(min>max)
			min=max;
	}
	printf("%d",min);
	return 0;
}