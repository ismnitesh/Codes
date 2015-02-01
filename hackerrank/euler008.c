#include<stdio.h>
int integer(char x)
{
	int y;
	y=x-48;
	return y;
}
int main()
{
	int t,n,k,max,mul=1,x,y,i;
	char a[1003];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		scanf("%s",a);
		mul=1;
		max=0;
		x=0;
		y=k;
		while(y<=n)
		{
			for(i=x;i<y;i++)
				mul=mul*(integer(a[i]));
			x++;
			y++;
			if(mul>max)
				max=mul;
			mul=1;
		}
		printf("%d\n",max);
	}
	return 0;
}