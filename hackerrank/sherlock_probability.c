#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,n,k,i,g,total;
	char s[100004];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		scanf("%s",s);
		int count=0,ans=0;
		for(i=0;i<n;i++)
		{
			if(i<=k)
			{
				if(s[i]=='1')
				{
					ans=ans+2*count+1;
					count++;
				}
			}
			else
			{
				if(s[i-k-1]=='1')
					count--;
				if(s[i]=='1')
				{
					ans=ans+2*count+1;
					count++;
				}
			}
		}
		total=pow(2,n);
		if(ans==0)
			printf("0/%d\n",total);
		else
		{
			g=gcd(total,ans);
			ans=ans/g;
			total=total/g;
			printf("%d/%d\n",ans,total);
		}
	}
	return 0;
}