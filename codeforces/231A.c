#include<stdio.h>
int main()
{
	int n,num,i,ans,count;
	scanf("%d",&n);
	ans=0;
	while(n--)
	{
		count=0;
		for(i=0;i<3;i++)
		{
			scanf("%d",&num);
			if(num)
				count++;
		}
		if(count>1)
			ans++;
	}
	printf("%d",ans);
	return 0;
}