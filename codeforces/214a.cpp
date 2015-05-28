#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,count=0,max_a,max_b;
	cin >> n >> m;
	max_a=sqrt(n);
	max_b=sqrt(m);
	for(a=0;a<=max_a;a++)
	{
		for(b=0;b<=max_b;b++)
		{
			if((a*a+b)==n && (a+b*b)==m)
				count++;
		}
	}
	cout << count;
	return 0;
}