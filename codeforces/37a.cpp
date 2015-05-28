#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,freq[1003],t=0,max=0,height;
	cin >> n;
	memset(freq,0,1003*sizeof(int));
	for(int i=0;i<n;i++)
	{
		cin >> height;
		if(freq[height]==0)
			t++;
		freq[height]++;
		if(freq[height]>max)
			max=freq[height];
	}
	cout << max << " " << t;
	return 0;
}