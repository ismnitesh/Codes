#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[100005],i;
	memset(arr,0,sizeof(arr));
	for(i=1;i<=100000;i++)
	{
		int x=i,s[35];
		memset(s,0,sizeof(s));
		for (int z = 0; z < 32; ++z){
    		s[z] = x & (1 << z) ? 1 : 0;
		}
		int cnt=0;
		for(int j=0;j<30;j++)
		{
			if(s[j]==1 && s[j+1]==0 && s[j+2]==1)
				cnt++;
		}
		arr[i]=cnt;
	}
	int t,r,k,cnt;
	cin >> t;
	while(t--)
	{
		cnt=0;
		cin >> r >> k;
		for(i=1;i<=r;i++)
		{
			if(arr[i]>=k)
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}