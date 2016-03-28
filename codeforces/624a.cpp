#include <bits/stdc++.h>
using namespace std;
int main()
{
	double d,l,v1,v2;
	cin >> d >> l >> v1 >> v2;
	double ans;
	ans=(l-d)/(v1+v2);
	printf("%0.20lf",ans);
	return 0;
}