#include<stdio.h>
int main()
{
	int t,n,i,num;
	long long int count;
	char s[100004];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",s);
		num=0;
		count=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='1')
			{
				count=(num+count)+1;
				num++;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}