#include<stdio.h>
char m[305][305];
int find(int i,int j,int n)
{
	int x,y,top,flag=0;
	int visited[303],a[305];
	for(x=0;x<n;x++)
	{
		visited[x]=0;
		a[x]=0;
	}
	a[0]=-1;
	a[1]=i;
	top=1;
	while(1)
	{
		if(a[top]==j)
		{
			flag=1;
			break;
		}
		else if(a[top]==-1)
			break;
		x=a[top];
		top--;
		visited[x]=1;
		for(y=0;y<n;y++)
		{
			if(m[x][y]=='1' && visited[y]==0)
			{
				top++;
				a[top]=y;
				visited[y]=1;
			}
		}
	}
	if(flag)
		return 1;
	else
		return 0;
}
int main()
{
	int n,tmp,i,j,a[305];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%s",m[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i] && (m[i][j]=='1' || find(i,j,n)))
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}