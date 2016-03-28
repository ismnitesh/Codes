#include <bits/stdc++.h>
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	string str1,str2;
	while(testcase--)
	{
		int flag=0;
		cin >> str1 >> str2;
		for(int i=0;i<str1.size();i++)
		{
			for(int j=0;j<str2.size();j++)
			{
				if(str1[i]==str2[j])
				{
					flag=1;
					break;
				}
			}
			if(flag)
				break;
		}
		if(flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}