#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	for(int i=0;i<5;i++)
	{
		cin >> n;
		sum+=n;
	}
	int ans=sum/5;
	if(ans*5==sum && ans>0)
		cout << ans;
	else
		cout << "-1";
	return 0;
}