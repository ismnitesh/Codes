#include<stdio.h>
int fact(int i)
{
	if(i==1)
		return 1;
	else
		return i*fact(i-1);
}
int main()
{
	int t,a[11],k,temp,i,j,c1,c2,x,ans;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<11;i++)
			scanf("%d",&a[i]);
		scanf("%d",&k);
		for(i=0;i<10;i++)
		{
			for(j=i+1;j<11;j++)
			{
				if(a[j]>a[i])
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
			}
		}
		x=a[k-1];
		c1=0;
		c2=0;
		for(i=0;i<11;i++)
		{
			if(i<k && a[i]==x)
			{
				c1++;
				c2++;
			}
			else if(a[i]==x)
				c2++;
		}
		if(c1==c2)
			ans=1;
		else
			ans=fact(c2)/fact(c2-c1)/fact(c1);
		printf("%d\n",ans);
	}
	return 0;
}