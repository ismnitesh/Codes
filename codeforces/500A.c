#include<stdio.h>
int main()
{
	int t,n,a[30007],curr,i;
	scanf("%d%d",&n,&t);
	for(i=1;i<n;i++)
		scanf("%d",&a[i]);
	curr=1;
	int flag=0;
	while(1)
	{
		if(curr>t)
			break;
		else if(curr==t)
		{
			flag=1;
			break;
		}
		curr=curr+a[curr];
	}
	if(flag)
		printf("YES");
	else
		printf("NO");
	return 0;
}