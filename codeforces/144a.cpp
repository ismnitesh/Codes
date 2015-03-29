#include <iostream>
using namespace std;
int main()
{
	int ans,a[100],n,min=100000,max=-1,min_i,max_i,i;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]>max){
			max=a[i];
			max_i=i;
		}
		if(a[i]<=min){
			min=a[i];
			min_i=i;
		}
	}
	if(max_i==0 && min_i==n-1)
		cout << "0";
	else
	{
		if(min_i<max_i)
			ans=max_i+n-min_i-2;
		else
			ans=max_i+n-min_i-1;
		cout << ans;
	}
	return 0;
}