#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,max=0,i;
	cin >> t;
	while(t--){
	max=0;
	cin >> n >> k;
	for(i=1;i<=k;i++)
	{
		if((n%i)>max)
			max=n%i;
	}
	cout << max << endl;
	}
}