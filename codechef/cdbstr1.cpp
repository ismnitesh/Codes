#include<bits/stdc++.h>
using namespace std;
int n,c;
int check(int num,int a[])
{
	int cows=1,pos=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]-pos>=num)
		{
			pos=a[i];
			cows++;
			if(cows==c)
				return 1;
		}
	}
	return 0;
}
int bs(int a[])
{
	int ini=0,last=a[n-1],max=-1;
	while(last>ini)
	{
		int mid=(ini+last)/2;
		if(check(mid,a)==1)
		{
			if(mid>max)
				max=mid;
			ini=mid+1;
		}
		else
			last=mid;
	}
	return max;
}
int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&c);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		int k=bs(a);
		printf("%d\n",k);
	}
	return 0;	
}