#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,sum,num,min,n,i,flag;
	cin >> t;
	while(t--)
	{
		cin >> n;
		min=100000;
		sum=0;
		flag=0;
		for(i=0;i<n;i++)
		{
			cin >> num;
			if(min>num)
				min=num;
			sum+=num;
			if(num<2)
				flag=1;
		}
		if(flag==0)
			cout << sum-min+2;
		else
			cout << "-1";
		cout << endl;
	}
	return 0;
}