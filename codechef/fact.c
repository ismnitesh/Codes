#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int long n;
		int i=1,sum=0;
		scanf("%ld",&n);
		while(pow(5,i)<=n)
		{
			sum=sum+n/pow(5,i);
			i++;
		}
		printf("%d\n",sum);
	}
	getch();
	return 0;
}
