#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,count;
	scanf("%d",&t);
	count=0;
	while(t--)
	{
		scanf("%d",&n);
		if(n%2==0)
			count++;
		else
			count--;
	}
	printf("%d",abs(count));
	return 0;
}