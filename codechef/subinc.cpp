#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[100005];
	cin >> t;
	while(t--)
	{
		cin >> n;
		long long int cnt=1;
		long long int ans=1;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(i>0 && a[i]>=a[i-1]){
				cnt++;
				ans+=cnt;
			}
			else if(i>0 && a[i]<a[i-1])
			{
				cnt=1;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}