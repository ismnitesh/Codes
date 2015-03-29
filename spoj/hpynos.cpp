#include<iostream>
using namespace std;
long long int happy(long long int n)
{
	long long int sum=0;
	while(n)
	{
		sum=sum+(n%10)*(n%10);
		n/=10;
	}
	return sum;
}
int main()
{
	long long int n,count=0,x,flag=0;
	cin >> n;
	x=n;
	while(x!=1 && x!=2 && x!=3 && x!=4 && x!=5 && x!=6 && x!=8 && x!=9)
	{
		x=happy(x);
		count++;	
	}
	if(x!=1)
		cout << "-1" << endl;
	else
		cout << count << endl;
	return 0;
}