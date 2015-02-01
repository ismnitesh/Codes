#include<stdio.h>
int prime(int x)
{
	int z=x-1,i;
	int flag=1;
	if(x==1)
		i=0;
	if(x==2)
		i=1;
	while(flag!=0 && z!=1 && x>2)
	{
		if(x%z==0)
		{
			flag=0;
			i=0;
			break;
		}
		else
		{
			i=1;
			z--;
		}
	}
	return i;
}
int main()
{
	int t,n,a[10005],k=0,z;
	scanf("%d",&t);
	while(t--)
	{
		k=0;
		scanf("%d",&n);
		for(z=2;z<=104729;z++)
		{
			if(prime(z))
				k++;
			if(k==n)
			{
				printf("%d\n",z);
				break;
			}
		}
	}
	return 0;
}