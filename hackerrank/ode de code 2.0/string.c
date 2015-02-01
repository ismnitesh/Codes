#include<stdio.h>
#include<string.h>
int main()
{
	int t,count,i,j,x,len;
	char a[100004];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			count=0;
			x=0;
			for(j=i;j<len;j++)
			{
				if(a[j]==a[x++])
				{
					count++;
				}
				else
					break;
			}
			printf("%d ",count);
		}
		printf("\n");
	}
}