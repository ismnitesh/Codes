#include<stdio.h>
#include<math.h>
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int main()
{
	int t,x,y,m,d,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		x=abs(x);
		y=abs(y);
		m=min(x,y);
		d=abs(x-y);
		if(x>=y)
		{
			if(d%2==0)
			{	
				ans=(m*2)+(d/2)*4;
			}
			else
			{
				ans=(m*2)+3+(d/2)*4;
			}
		}
		else
		{
			if(d%2==1)
			{	
				ans=(m*2)+(d/2)*4+1;
			}
			else
			{
				ans=(m*2)+(d/2)*4;
			}
		}
			printf("%d\n",ans);
	}
	return 0;
}