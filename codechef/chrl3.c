#include<stdio.h>
int main()
{
	int i,j=0,n,a[100003]={0},temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		j=0;
		while(a[j]>temp)
			j++;
		a[j++]=temp;
	}
	j=0;
	while(a[j++]!=0);
	printf("%d\n",j-1);
	return 0;
}