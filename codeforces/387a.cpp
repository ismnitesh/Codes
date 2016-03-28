#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h1,h2,m1,m2;
	scanf("%d:%d",&h1,&m1);
	scanf("%d:%d",&h2,&m2);
	int h = h1-h2;
	int m = m1-m2;
	if(m<0)
	{
		m=(m%60+60)%60;
		h--;
	}
	h=(h%24+24)%24;
	printf("%02d:%02d",h,m);
	return 0;
}