#include<stdio.h>
int main()
{
	int flag,i,n,c1=0,c2=0,c3=0,c4=0,c5=0,mark,a[105],b[105],c[105],d[105],e[105];
	char cz;
	scanf("%d",&n);
	for(i=0;i<=100;i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
		d[i]=0;
		e[i]=0;
	}
	while(n--)
	{
		scanf(" %c%d",&cz,&mark);
		if(cz=='A')
		{
			a[mark]++;
			c1++;
		}
		else if(cz=='B')
		{
			b[mark]++;
			c2++;
		}
		else if(cz=='C')
		{
			c[mark]++;
			c3++;
		}
		else if(cz=='D')
		{
			d[mark]++;
			c4++;
		}
		else if(cz=='E')
		{
			e[mark]++;
			c5++;
		}
	}
	flag=0;
	for(i=0;i<=100;i++)
	{
		if(a[i]>c1/10)
		{
			flag=1;
			printf("%d ",i);
		}
	}
	if(flag==0)
		printf("Nothing Unusual");
	flag=0;
	printf("\n");
	for(i=0;i<=100;i++)
	{
		if(b[i]>c2/10)
		{
			flag=1;
			printf("%d ",i);
		}
	}
	if(flag==0)
		printf("Nothing Unusual");
	printf("\n");
	flag=0;
	for(i=0;i<=100;i++)
	{
		if(c[i]>c3/10)
		{
			flag=1;
			printf("%d ",i);
		}
	}
	if(flag==0)
		printf("Nothing Unusual");
	printf("\n");
	flag=0;
	for(i=0;i<=100;i++)
	{
		if(d[i]>c4/10)
		{
			flag=1;
			printf("%d ",i);
		}
	}
	if(flag==0)
		printf("Nothing Unusual");
	printf("\n");
	flag=0;
	for(i=0;i<=100;i++)
	{
		if(e[i]>c5/10)
		{
			flag=1;
			printf("%d ",i);
		}
	}
	if(flag==0)
		printf("Nothing Unusual");
	printf("\n");
	return 0;
}