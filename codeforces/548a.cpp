#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[1004];
	int k,i,j,l,start,end,t;
	cin >> s;
	cin >> k;
	l=strlen(s);
	if(k==l)
	{
		cout << "YES";
		return 0;
	}
	t=l/k;
	if(t*k!=l)
	{
		cout << "NO";
		return 0;
	}
	else
	{
		for(i=0;i<k;i++)
		{
			start=i*t;
			end=start+t-1;
			for(j=start;j<=(end+start)/2;j++)
			{
				if(s[j]!=s[end+start-j])
				{

				//	cout << start << end << j;
					cout << "NO";
					return 0;
				}
			}
		}
		cout << "YES";
	}
	return 0;
}