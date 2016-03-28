#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	cin >> num;
	int l=num.length();
	int m=0;
	for(int i=0;i<l;i++)
	{
		if(num[i]-'0'>m)
			m=num[i]-'0';
	}
	cout << m << endl;
	while(m--)
	{
		int f=0;
		for(int i=0;i<l;i++)
		{
			if(num[i]>'0')
				f=1;
			if(f==1 && num[i]>'0')
			{
				cout << "1";
				num[i]--;
			}
			else if(f==1 && num[i]=='0')
				cout << "0";
		}
		cout << " ";
	}
	return 0;
}