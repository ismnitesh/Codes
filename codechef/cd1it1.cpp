#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100005],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	if(n%2==1)
		printf("%d",a[n/2]);
	else
		printf("%d",a[n/2-1]);
	return 0;
}