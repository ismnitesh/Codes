#include<stdio.h>
int d(char k[],int i)
{
	int n=0,j=0;
	while(k[j]!='\0')
	{
		if(k[j]=='i')
		{
			n++;
		}
		j++;
	}
	return n;
}
int main()
{
	int t,ans;
	char m[1000];
	scanf("%s",m);
	ans=d(m,5);
	printf("%d\n",ans);
	return 0;
}