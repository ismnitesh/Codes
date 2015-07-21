#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,i;
	string str,s;
	vector<string>v_str;
	cin >> k >> n;
	for(i=0;i<k;i++)
	{
		cin >> s;
		v_str.push_back(s);
	}
	while(n--)
	{
		cin >> str;
		if(str.size()>=47)
			cout << "Good\n";
		else
		{
			int flag=0;
			for(i=0;i<k;i++)
			{
				size_t found = str.find(v_str[i]);
				if(found!=string::npos)
				{
					cout << "Good\n";
					flag=1;
					break;
				}
			}
			if(flag==0)
			cout << "Bad\n";
		}
	}
	return 0;
}