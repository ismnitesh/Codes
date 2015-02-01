#include<stdio.h>
int main()
{
	int t,i,num,sum,n,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&num);
			sum=sum+num;
			if(num>0 &&  num<=100)
				count++;
		}
		if(sum>=100 && sum<(100+count))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}