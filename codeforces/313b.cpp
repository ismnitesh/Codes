#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,l,r,i,a[100004],cnt=0;
	char s[100004];
	cin >> s;
	int len=strlen(s);
	a[0]=0;
	for(i=0;i<len-1;i++)
	{
		if(s[i]==s[i+1])
			cnt++;
		a[i+1]=cnt;
	}
	cin >> m;
	while(m--)
	{
		cin >> l >> r;
		cout << a[r-1]-a[l-1] << endl;
	}
	return 0;
}