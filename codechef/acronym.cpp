#include <bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	string s;
	while(cin >> s)
	{
		int f=1;
		if(s.size()>1)
		{
			for(int i=0;i<s.size();i++)
			{
				if(s[i]>='a' && s[i]<='z'){
					f=0;
					break;
				}
			}
			if(f)
				cnt++;
		}
	}	
	cout << cnt;
	return 0;
}