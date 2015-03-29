#include<iostream>
using namespace std;
int main()
{
	long long int i,t,n,num,sum;
	cin >> t;
	while(t--)
	{
		sum=0;
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> num;
			sum=sum+num;
			sum=sum%n;
		}
		if(sum==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}