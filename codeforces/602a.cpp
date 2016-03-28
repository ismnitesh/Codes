#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int num1=0,num2=0;
	int n,b1,b2,x;
	cin >> n >> b1;

	while(n--)
	{
		cin >> x;
		num1=num1*b1+x;
	}
	cin >> n >> b2;
	while(n--)
	{
		cin >> x;
		num2=num2*b2+x;
	}
	if(num1<num2)
		cout << "<";
	else if(num1==num2)
		cout << "=";
	else
		cout << ">";
	return 0;
}