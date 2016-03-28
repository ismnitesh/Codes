#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[8][8];
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
			cin >> a[i][j];
	}
	int a_min=10,b_min=10;
	for(int j=0;j<8;j++)
	{
		for(int i=7;i>=0;i--)
		{
			if(a[i][j]!='.')
			{	
				if(a[i][j]=='W')
					break;
				else
				{
					b_min=min(b_min,8-i-1);
					break;
				}
			}
		}
	}
	for(int j=0;j<8;j++)
	{
		for(int i=0;i<8;i++)
		{
			if(a[i][j]!='.')
			{	
				if(a[i][j]=='B')
					break;
				else
				{
					a_min=min(a_min,i);
					break;
				}
			}
		}
	}
	if(a_min<=b_min)
		cout << "A";
	else
		cout << "B";
}