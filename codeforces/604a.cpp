#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m[5],w[5],h[2],total=0;
	for(int i=0;i<5;i++)
		cin >> m[i];
	for(int i=0;i<5;i++)
		cin >> w[i];
	cin >> h[0] >> h[1];
	total=total+(100*h[0]-50*h[1]);
	for(int i=0;i<5;i++)
	{
		int p=500*(i+1);
		total=total+max((3*p/10),(p-(m[i]*p/250)-50*w[i]));
	}
	cout << total;
	return 0;
}