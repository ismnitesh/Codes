#include <bits/stdc++.h>
using namespace std;
long long int fun(long long int k,long long int l,long long int *cnt)
{
	long long int mid = (l+1)/2;
	if(k<=2)
		return 0;
	else if(k==3)
		return 1;
	if(k==mid)
		return 0;
	else if(k<mid)
		return fun(k,(l-1)/2,cnt);
	else {
		(*cnt)++;
		return fun(mid-(k-mid),(l-1)/2,cnt);
}
}
int main()
{
	long long int t,ans,k,i;
	cin >> t;
	for(i=1;i<=t;i++)
	{
		cin >> k;
		long long int cnt=0;
		long long int l = ceil(log2(k+1));
		l=pow(2,l)-1;
	//	cout << "l=" << l<<endl;
		ans=fun(k,l,&cnt);
	//	cout << "cnt=" << cnt<<endl;
		if(cnt%2)
			ans=1-ans;
		cout << "Case #" << i<<": "<<ans<<endl;
	}
	return 0;
}