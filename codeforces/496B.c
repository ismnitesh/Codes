#include<stdio.h>
#include<string.h>
int main()
{
	int n,x,i,k,j;
	scanf("%d",&n);
	char s[n],t[n],u[n],v[n];
	scanf("%s",s);
	strcpy(t,s);
	strcpy(v,s);
	for(i=0;i<n;i++)
	{
		x='9'-s[i]+1;
		strcpy(t,s);
		for(j=0;j<n;j++)
		{
			t[j]=((t[j]+x-'0')%10)+'0';
		}
		for(k=0;k<n;k++)
		{
			u[k]=t[(k+i)%n];
		}
		if(strcmp(v,u)==1)
		{
			strcpy(v,u);
		}
	}
	for(i=0;i<n;i++)
	printf("%c",v[i]);
	return 0;
}