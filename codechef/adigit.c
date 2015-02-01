#include<stdio.h>
int main()
{
	int n,m,b1,b2,x,i,num;
	char s[100005];
	scanf("%d%d",&n,&m);
	scanf("%s",s);
	while(m--)
	{
		b1=0;
		b2=0;
		scanf("%d",&x);
		for(i=0;i<(x-1);i++)
		{
			num=s[x-1]-s[i];
			if(num>0)
				b1=b1+num;
			else
				b2=b2+num;
		}
		printf("%d\n",b1-b2);
	}
	return 0;
}