#include<stdio.h>
#include<string.h>
char s[100005];
int palin(int i,int j)
{
	int flag=0;
	while(i<=j)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}
		i++;
		j--;
	}
	if(flag==0)
		return 1;
	else
		return 0;
}
int main()
{
	int t,count,flag,l,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		l=strlen(s);
		count=0;
		flag=0;
		i=0;
		j=l-1;
		while(i<=j)
		{
			if(s[i]==s[j])
			{
				i++;
				j--;
			}
			else
			{
				flag=1;
				if(palin(i+1,j))
				{
					printf("YES\n");
					break;
				}
				else if(palin(i,j-1))
				{	
					printf("YES\n");
					break;
				}
				else
				{
					printf("NO\n");
					break;
				}
			}
		}
		if(flag==0)
			printf("YES\n");
	}
	return 0;
}