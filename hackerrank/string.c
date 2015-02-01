#include<stdio.h>
#include<string.h>
int main()
{
	int i,la,lb;
	char a[100005],b[100005];
	char *x;
	scanf("%s%s",a,b);
	la=strlen(a);
	lb=strlen(b);
	x=strstr(a,b);
	if(x==NULL)
		printf("NO\n");
	else
	{
		printf("YES\n");
		//printf("%d",x-a);
		for(i=0;i<x-a;i++)
			printf("%c",a[i]);
		for(i=lb-1;i>=0;i--)
			printf("%c",b[i]);
		for(i=x-a+lb;i<la;i++)
			printf("%c",a[i]);
		printf("\n");
	}
	return 0;
}