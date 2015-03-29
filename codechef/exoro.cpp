#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int odd=0,even=0,n,num,i;
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> num;
			if(num%2==0)
				even++;
			else
				odd++;
		}
		cout<<odd*even<<endl;
	}
	return 0;
}