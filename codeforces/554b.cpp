#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,max,cnt,i,j;
	string s;
	vector <string> v;
	cin >> t;
	max=1;
	for(i=0;i<t;i++)
	{
		cin >> s;
		v.push_back(s);
		cnt=1;
		for(j=0;j<i;j++)
		{
			if(v[i]==v[j])
				cnt++;
			if(cnt>max)
				max=cnt;
		}
	}
	cout << max;
	return 0;
}