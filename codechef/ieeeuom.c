#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,sum,i,p,num;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		num=i;
		sum=pow((num%10),3);
		num=num/10;
		sum=sum+pow((num%10),3);
		num=num/10;
		sum=sum+pow((num%10),3);
		if(sum==i)
		{
			printf("%d\n",sum);
		}
	}
	return 0;
}