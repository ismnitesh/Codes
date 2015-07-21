#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,c=0,bi=0,b=0,num;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> num;
		if(i%3==0)
			c+=num;
		else if(i%3==1)
			bi+=num;
		else
			b+=num;
	}
	if(c>bi && c > b)
		cout << "chest";
	else if(bi > c && bi > b)
		cout << "biceps";
	else
		cout << "back";
	return 0;
}