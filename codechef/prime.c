#include<stdio.h>
int i;
int prime(int);
int main()
{
	int t;
	FILE *fp;
	fp=fopen("10000p.txt","w");
	long int a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld%ld",&a,&b);
		while(a!=b+1)
		{	
			i=prime(a);
			if(i==1)
			{
				fprintf(fp,"%ld,",a);
			}
			a++;
		}
		printf("\n");
	}
	return 0;
}
int prime(int x)
{
	int z=x-1;
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
