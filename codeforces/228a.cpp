#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,cnt=0;
	cin >> a >> b >> c >> d;
	if(a==b || a==c || a==d)
		cnt++;
	if(b==c || b==d)
		cnt++;
	if(c==d)
		cnt++;
	cout << cnt;
	return 0;
}