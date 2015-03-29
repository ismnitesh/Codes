#include<iostream>
using namespace std;
int main()
{
	long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<< 192+(n-1)*250<<endl;
	}
	return 0;
}