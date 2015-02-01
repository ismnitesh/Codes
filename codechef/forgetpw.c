#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int t,n,i,len,j,flag,zero,bzero,p=0,z;
	char s[1000005],a[100],b[100],new[1000005];
	scanf("%d",&t);
	while(t--)
	{
		z=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf(" %c",&a[i]);
			scanf(" %c",&b[i]);
		}
		scanf("%s",s);
		strcpy(new,s);
		len=strlen(s);
		p=len;
		for(i=0;i<len;i++)
		{
			for(j=0;j<n;j++)
			{
				if(s[i]==a[j])
				{
					new[i]=b[j];
					if(new[i]=='.')
					{
						p=i;
					}
					break;
				}
			}
			if(new[i]=='.')
			{
				p=i;
			}
		}
		for(i=(len-1);i>=0;i--)
		{
			if(new[i]!='0')
				break;
			else if(i>p)
				len--;
		}
		bzero=0;
		if(new[len-1]=='.')
		{
			len--;
			bzero=1;
		}
		flag=0;
		zero=0;
		for(i=0;i<len;i++)
		{
			if(new[i]!='0')
			{
				flag=1;
				printf("%c",new[i]);
			}
			else if(new[i]=='-' && flag==0)
			{
				printf("%c",new[i]);
			}
			else if(new[i]=='0' && flag==0)
			{	
				zero++;
				continue;
			}
			else
				printf("%c",new[i]);
		}
		if(zero==(len) && bzero==1)
		{
			z=1;
			printf("0");
		}
		if(zero==len && z==0)
			printf("0");
		printf("\n");
	}
	return 0;
}
