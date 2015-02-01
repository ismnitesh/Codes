#include<stdio.h>
#include<string.h>
int main()
{
	int t,len,i,flag,j;
	char s[100006];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		len=strlen(s);
		i=0;
		j=len-1;
		flag=0;
		while(i<j)
		{
			if(s[i]==s[j])
			{
				i++;
				j--;
			}
			else if(s[i]!=s[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("2\n");
		else
			printf("1\n");
	}
	return 0;
}