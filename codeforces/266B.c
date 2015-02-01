#include<stdio.h>
int main()
{
	int n,t,i;
	char s[55],tmp;
	scanf("%d%d",&n,&t);
	scanf("%s",s);
	while(t--)
	{
		for(i=1;i<n;i++)
		{
			if(s[i]=='G' && s[i-1]=='B')
			{
				tmp=s[i];
				s[i]=s[i-1];
				s[i-1]=tmp;
				i++;
			}
		}
	}
	printf("%s",s);
	return 0;
}