#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,num;
	cin >> n;
	while(n--)
	{
		cin >> num;
		long long int x=num;
		long long int cnt=0;
		while(x%5==0)
		{
			x/=5;
			cnt++;
		}
		x=num;
		long long int cnt_2=0;
		while(x%2==0)
		{
			x/=2;
			cnt_2++;
		}
		cnt-=cnt_2;
		if(cnt > 0 && cnt%2)
			cnt=cnt/2+1;
		else if(cnt > 0 && cnt%2==0) 
			cnt/=2;
		while(cnt>0){
			num*=4;
			cnt--;
		}
		cout << num << endl;
	}
	return 0;
}