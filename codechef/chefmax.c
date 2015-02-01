#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,len,a[28],max;
	char s[1004],tmp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		len=strlen(s);
		max=0;
		for(i=0;i<28;i++)
			a[i]=0;
		for(i=0;i<len;i++)
			a[s[i]-97]++;
		for(i=0;i<26;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				tmp=i+97;
			}
		}
		for(i=0;i<len;i++)
		{
			if(s[i]==tmp)
				printf("?");
			else
				printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}