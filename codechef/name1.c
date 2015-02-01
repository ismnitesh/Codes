#include<stdio.h>
#include<string.h>
int main()
{
	int t,n,i,len,c[28],co[28],lena,lenb;
	char a[40005],b[40005],s[40005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		scanf("%s",b);
		scanf("%d",&n);
		for(i=0;i<27;i++)
		{	
			c[i]=0;
			co[i]=0;
		}
		lena=strlen(a);
		lenb=strlen(b);
		for(i=0;i<lena;i++)
			co[a[i]-96]++;
		for(i=0;i<lenb;i++)
			co[b[i]-96]++;
		while(n--)
		{
			scanf("%s",s);
			len=strlen(s);
			for(i=0;i<len;i++)
				c[s[i]-96]++;
		}
		int flag=0;
		for(i=0;i<27;i++)
		{
			if(c[i]>co[i])
			{
				flag=1;
				break;
			}
		}
		if(flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}