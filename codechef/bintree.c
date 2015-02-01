#include<stdio.h>
int level(int);
int parent(int);
int main()
{
	int t;
	int i,j,l1,l2,p1,p2,a,b;
	scanf("%d",&t);
	while(t--)
	{	
		int e1=0,e2=0,z=0;
		scanf("%d%d",&i,&j);
		a=i;
		b=j;
		l1=level(i);
		l2=level(j);
		p1=parent(i);
		p2=parent(j);
		if(p1==p2 && i!=j)
			printf("2\n");
		else
		{
		while(p1!=p2)
		{
			if(l1==l2)
			{
				p1=parent(i);
				i=p1;
				e1++;
				l1=level(i);
				p2=parent(j);
				j=p2;
				e2++;
				l2=level(j);
			}
			else if(l1<l2)
			{
				while(l1!=l2)
				{
					p2=parent(j);
					e2++;
					j=p2;
					l2=level(j);
					if(p2==a)
						z=2;
				}
			}
			else if(l1>l2)
			{
				while(l1!=l2)
				{
					p1=parent(i);
					e1++;
					i=p1;
					l1=level(i);
					if(p1==b)
						z=2;
				}
			}
		}
		printf("%d\n",e1+e2-z);
		e1=0;
		e2=0;
		z=0;
	}
	}
	return 0;
}
int level(int n)
{
	int count=1,z=2;
	while(z<=n)
	{
		z=z*2;
		count++;
	}
	return count;
}
int parent(int n)
{
	if(n==1)
		return 0;
	else if(n%2==0)
		return (n/2);
	else
		return (n-1)/2;
}