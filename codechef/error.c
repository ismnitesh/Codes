#include<stdio.h>
#include<string.h>
int main()
{
	int t,flag,len,i;
	char a[100004];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		len=strlen(a);
		flag=0;
		for(i=2;i<len;i++)
		{
			if(a[i]==a[i-2] && a[i-1]!=a[i-2])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("Good\n");
		else
			printf("Bad\n");
	}
	return 0;
}