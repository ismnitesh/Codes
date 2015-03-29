#include <iostream>
using namespace std;
int main()
{
	int n,a[100][3],sx=0,sy=0,sz=0,i;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i][0] >> a[i][1] >> a[i][2];
	for(i=0;i<n;i++)
	{
		sx+=a[i][0];
		sy+=a[i][1];
		sz+=a[i][2];
	}
	if(sx==0 && sy==0 && sz==0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}