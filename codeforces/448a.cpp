#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0,num;
	for(int i=0;i<3;i++)
	{
		cin >> num;
		a+=num;
	}
	for(int i=0;i<3;i++)
	{
		cin >> num;
		b+=num;
	}
	cin >> n;
	n-=a/5;
	a%=5;
	n-=b/10;
	b%=10;
	if(a)
		n--;
	if(b)
		n--;
	if(n>=0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}