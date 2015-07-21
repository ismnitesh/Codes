#include <bits/stdc++.h>
using namespace std;
int search(int x,int a[],int min,int max)
{
	int mid=min+(max-min)/2;
	if(a[max-1]<x)
		return max;
	if(a[mid]>=x && a[mid-1]<x)
		return mid;
	else if(a[mid]<x)
		search(x,a,mid,max);
	else
		search(x,a,min,mid);
}
int main()
{
	int n,i,a[100005],m,num,x;
	cin >> n;
	a[0]=0;
	for(i=1;i<=n;i++)
	{
		cin >> num;
		a[i]=a[i-1]+num;
	}
	cin >> m;
	while(m--)
	{
		cin >> x;
		cout << search(x,a,1,n) << endl;
	}
	return 0;
}