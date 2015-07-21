#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,min1,min2,min3,max1,max2,max3,d1,d2,d3;
	cin >> n;
	cin >> min1 >> max1;
	cin >> min2 >> max2;
	cin >> min3 >> max3;
	d1=min1;
	d2=min2;
	d3=min3;
	int sum=d1+d2+d3;
	if(sum<n)
	{
		int diff=n-sum;
		if(d1+diff<max1)
		{
			d1+=diff;
			diff=0;
		}
		else
		{
			diff-=max1-d1;
			d1=max1;
			if(d2+diff<max2)
			{
				d2+=diff;
				diff=0;
			}
			else
			{
				diff-=max2-d2;
				d2=max2;
				d3+=diff;
			}
		}
	}
	cout <<  d1 << " " << d2 << " " << d3;
	return 0;
}