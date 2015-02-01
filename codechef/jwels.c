#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,c=0;
		char a[102],b[102];
		int x[150]={0};
		scanf("%s%s",a,b);
		for(i=0;a[i]!='\0';i++)
			x[a[i]]++;
		for(i=0;b[i]!='\0';i++)
			if(x[b[i]])
				c++;
		printf("%d\n",c);
	}
	return 0;
}