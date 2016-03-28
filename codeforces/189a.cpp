#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	int arr[4008];
	memset(arr,0,sizeof(arr));
	arr[a]=1;
	arr[b]=1;
	arr[c]=1;
	for(int i=1;i<=n;i++)
	{
		if(i-a>=0 && arr[i-a]>0)
			arr[i]=max(arr[i],1+arr[i-a]);
		if(i-b>=0 && arr[i-b]>0)
			arr[i]=max(arr[i],1+arr[i-b]);
		if(i-c>=0 && arr[i-c]>0)
			arr[i]=max(arr[i],1+arr[i-c]);
	}
	cout << arr[n];
	return 0;
}