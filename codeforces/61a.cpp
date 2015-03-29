#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string a,b;
	int i,l;
	cin >> a >> b;
	l=a.size();
	for(i=0;i<l;i++)
	{
		if(a[i]==b[i])
			cout << "0";
		else
			cout << "1";
	}
	return 0;
}