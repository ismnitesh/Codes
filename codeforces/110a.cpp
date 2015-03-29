#include <iostream>
using namespace std;
int main()
{
	int i,cnt,flag,l;
	string s;
	cin >> s;
	l=s.length();
	flag=0;
	cnt=0;
	for(i=0;i<l;i++)
	{
		if(s[i]=='4' || s[i]=='7')
			cnt++;
	}
	if(cnt==0)
		flag=1;
	while(cnt)
	{
		if(cnt%10!=4 && cnt%10!=7)
		{
			flag=1;
			break;
		}
		cnt/=10;
	}
	if(flag==0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}