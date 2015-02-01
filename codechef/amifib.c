#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i,f,n,a[10001]={0};
	char s[1001];
	scanf("%d",&t);
	a[0]=0;
	a[1]=1;
	for(i=2;i<5000;i++)
		a[i]=a[i-1]+a[i-2];
	while(t--)
	{
		f=0;
		n=0;
		scanf("%s",s);
		for(i=0;s[i]!='\0';i++)
        {
            n*=10;
            n+=(s[i]-48);
        }
		for(i=0;i<5000;i++)
		{
			if(n==a[i])
			{
				f=1;
				break;
			}
		}
		if(f==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}