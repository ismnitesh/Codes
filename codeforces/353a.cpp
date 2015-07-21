#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,o_e=0,e_o=0,i,a[104][2],cnt_1=0,cnt_2=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i][0] >> a[i][1];
		if(a[i][0]%2 && a[i][1]%2==0)
			o_e=1;
		else if(a[i][0]%2==0 && a[i][1]%2)
			e_o=1;
		cnt_1+=a[i][0];
		cnt_2+=a[i][1];
	}
	if(cnt_1%2==0 && cnt_2%2==0)
		cout << "0";
	else if(cnt_1%2 && cnt_2%2==0)
		cout << "-1";
	else if(cnt_1%2==0 && cnt_2%2)
		cout << "-1";
	else if(cnt_1%2 && cnt_2%2 && (e_o==1 || o_e))
		cout << "1";
	else
		cout << "-1";
	return 0;
}