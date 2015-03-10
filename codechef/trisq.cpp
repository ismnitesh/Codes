#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,num,i,a[10005];
	scanf("%d",&t);
	int count=0,ind=0;
	a[1]=0;
	a[2]=0;
	a[3]=0;
	for(i=4;i<=10000;i++)
	{
		if(i%2==0)
		{
			count++;
			ind+=count;
		}
		a[i]=ind;
	}
	while(t--)
	{
		scanf("%d",&num);
		printf("%d\n",a[num]);
	}
	return 0;
}