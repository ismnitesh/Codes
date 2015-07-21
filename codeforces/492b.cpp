#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,i,a[1005],dis;
	cin >> n >> l;
	for (i=0;i<n;i++)
		cin >> a[i];
	sort (a,a+n);
	double max=0.0;
	for(i=1;i<n;i++){
		dis=a[i]-a[i-1];
		if((double)dis>max)
		max=(double)dis;
	}
	max/=2;
	if((double)a[0]>max)
		max=(double)a[0];
	if((double)(l-a[n-1])>max)
		max=(double)l-a[n-1];
	printf("%lf",max);
}