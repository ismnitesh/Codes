#include <bits/stdc++.h>
int a[27];
using namespace std;
main()
{
	int n,i,t=0;
	char s,c;
	cin >> n;
	for(i=0;i<n-1;i++)
	{
		cin >> s >> c;
		a[s-'a']++;
		if(a[c-'A']>0)
			a[c-'A']--;	
		else
			t++;
	}
	cout << t;
}