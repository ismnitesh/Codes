#include<stdio.h>
#include<string.h>
int main()
{
	int t,ab[30],aw[30],lb,lw,count,i;
	char b[30],w[102];
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<30;i++)
		{
			ab[i]=0;
			aw[i]=0;
		}
		scanf("%s",b);
		scanf("%s",w);
		lb=strlen(b);
		lw=strlen(w);
		for(i=0;i<lb;i++)
		{
			ab[b[i]-97]++;
		}
		for(i=0;i<lw;i++)
		{
			aw[w[i]-97]++;
		}
		count=0;
		for(i=0;i<26;i++)
		{
			if(aw[i]!=0 && ab[i]!=0)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}