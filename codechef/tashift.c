#include<stdio.h>
int main()
{
	int len,i,j,max,count,ans;
	char a[1000003],b[1000004];
	scanf("%d",&len);
	scanf("%s",a);
	scanf("%s",b);
	max=0;
	ans=0;
	for(i=0;i<len;i++)
	{
		count=0;
		if(b[i]==a[0] && b[(i+max)%len]==a[max])
		{
			for(j=i;j<i+len;j++)
			{
				if(b[j%len]==a[j-i])
				{
					count++;
				}
				else
					break;
				if(count>max)
				{
					max=count;
					ans=i;
				}
			}
		}
	}
	printf("%d",ans);
	return 0;
}