#include<stdio.h>
int main()
{
	int n,t[100005],l[100005],min,flag,out,in,z,i,li;
	long long int final;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
		scanf("%d",&l[i]);
	}
	out=0;
	flag=0;
	final=0;
	while(flag!=1)
	{
		flag=1;
		min=1000000000;
		for(i=0;i<=out;i++)
		{
			if(l[i]!=-1)
			{
				flag=0;
				if(l[i]<min)
				{
					min=li;
					in=t[i];
					z=i;
				}
			}
		}
		out=out+min;
		final=final+out-in;
		l[z]=-1;
	}
	printf("%d",final/n);
	return 0;
}