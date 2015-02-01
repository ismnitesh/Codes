#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,l;
	char s[105],c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		l=strlen(s);
		int flag=0;
		for(i=l-1;i>0;i--)
		{
			for(j=i-1;j>=0;j--)
			{
				if(s[i]>s[j])
				{
					c=s[i];
					s[i]=s[j];
					s[j]=c;
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
		}
		if(flag==1)
		{
			for(i=0;i<l;i++)
				printf("%c",s[i]);
			printf("\n");
		}
		else
			printf("no answer\n");
	}
	return 0;
}