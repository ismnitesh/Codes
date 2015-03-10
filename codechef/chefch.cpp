#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,l,i;
	char a[100005],b[100005],s[100005];
	for(i=0;i<100005;i+=2)
	{
		a[i]='+';
		a[i+1]='-';
		b[i]='-';
		b[i+1]='+';
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		l=strlen(s);
		int c1=0;
		int c2=0;
		for(i=0;i<l;i++)
		{
			if(a[i]!=s[i])
				c1++;
			if(b[i]!=s[i])
				c2++;
		}
		printf("%d\n",(c1>c2?c2:c1));
	}
	return 0;
}