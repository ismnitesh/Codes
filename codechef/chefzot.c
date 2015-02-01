#include<stdio.h>
int main()
{
	int n,num,count=0,max=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num!=0)
			count++;
		else if(num==0)
			count=0;
		if(max<count)
			max=count;
	}
	printf("%d\n",max);
	return 0;
}