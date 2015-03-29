#include <iostream>
using namespace std;
int fun(int y)
{
	int a[4];
	a[3]=y%10;
	y/=10;
	a[2]=y%10;
	y/=10;
	a[1]=y%10;
	y/=10;
	a[0]=y%10;
	y/=10;
	if(a[0]==a[1]||a[0]==a[2]||a[0]==a[3]||a[1]==a[2]||a[1]==a[3]||a[2]==a[3])
		return 0;
	else
		return 1;
}
int main()
{
	int y;
	cin >> y;
	y++;
	while(!fun(y))
		y++;
	cout << y;
	return 0;
}