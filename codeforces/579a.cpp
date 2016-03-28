#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int d=0;
	while(n>0){
		if(n%2) d++;
		n/=2;
	}
	cout << d;
	return 0;
}