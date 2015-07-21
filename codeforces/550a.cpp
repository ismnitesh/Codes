#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,i,cnta=0,cntb=0;
	vector<int>a,b;
	char s[100005];
	cin >> s;
	l=strlen(s);
	for(i=0;i<l-1;i++)
	{
		if(s[i]=='A' && s[i+1]=='B'){
			a.push_back(i);
			cnta++;
		}
		if(s[i]=='B' && s[i+1]=='A'){
			b.push_back(i);
			cntb++;
		}
	}
	if(cnta==0 || cntb==0)
		cout << "NO";
	else
	{
		if(abs(a[0]-b[cntb-1])>=2)
			cout << "YES";
		else if(abs(a[cnta-1]-b[0])>=2)
			cout << "YES";
		else
			cout << "NO";
	}
	return 0;
}