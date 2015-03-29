#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int ans;
	double d,r,x1,x2,y1,y2;
	cin >> r >> x1 >> y1 >> x2 >> y2;
	d=sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
	r=r*2;
	ans=d/r;
	d/=r;
	if(d!=ans)
		ans++;
	cout << ans;
	return 0;
}