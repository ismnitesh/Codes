#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,pre,cnt,i,a[1000006];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	pre=a[0];
	cnt=1;
	for(i=1;i<n;i++)
	{
		if(a[i]>=pre+k)
		{
			cnt++;
			pre=a[i];
		}
	}
	printf("%d",cnt);
	return 0;
}