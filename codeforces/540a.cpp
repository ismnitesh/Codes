#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,i;
	char a[1002],b[1002];
	cin >> n;
	cin >> a >> b;
	for(i=0;i<n;i++)
	{
		if(abs(a[i]-b[i]) < 10-abs(a[i]-b[i]))
			count+=abs(a[i]-b[i]);
		else
			count+=(10-abs(a[i]-b[i]));
//		cout << count << endl;
	}
	cout << count;
	return 0;
}