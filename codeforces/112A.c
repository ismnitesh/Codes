#include<stdio.h>
#include<string.h>
int main()
{
	int i,len;
	char a[105],b[105];
	scanf("%s",a);
	scanf("%s",b);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
			a[i]=a[i]+32;
		if(b[i]>='A' && b[i]<='Z')
			b[i]=b[i]+32;
	}
	int flag=0;
	for(i=0;i<len;i++)
	{
		if(a[i]>b[i])
		{
			flag=1;
			break;
		}
		if(a[i]<b[i])
		{
			flag=2;
			break;
		}
	}
	if(flag==0)
		printf("0");
	else if(flag==1)
		printf("1");
	else if(flag==2)
		printf("-1");
	return 0;
}