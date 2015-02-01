#include<stdio.h>
#include<conio.h>
int main()
{
	int t,i,j,max=0,ind;
	scanf("%d",&t);
	int a[t],b[t],x[t],c[t],d[t];
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		c[i]=0;
		d[i]=0;
		for(j=0;j<i;j++)
		{
			c[i]=c[i]+a[j];
			d[i]=d[i]+b[j];
		}
	}
	for(i=0;i<t;i++)
	{
		if(c[i]>d[i] && max<(c[i]-d[i]))
		{
			ind=1;
			max=c[i]-d[i];
		}
		else if(d[i]>c[i] && max<(d[i]-c[i]))
		{	
			ind=2;
			max=d[i]-c[i];
		}
	}
	printf("%d %d\n",ind,max);
	getch();
	return 0;
}
