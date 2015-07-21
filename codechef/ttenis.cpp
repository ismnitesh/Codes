#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,l,cnt_0,cnt_1,flag;
	char s[104];
	cin >> t;
	while(t--)
	{
		flag=0;
		cnt_0=0;
		cnt_1=0;
		cin >> s;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='0')
				cnt_0++;
			if(s[i]=='1')
				cnt_1++;
			if(cnt_1==11 && cnt_0 < 10)
			{
				flag=1;
				break;
			}
			else if(cnt_0==11 && cnt_1 < 10)
			{
				flag=2;
				break;
			}
			else if(cnt_1==11 && cnt_0==10)
				flag=3;
			else if(cnt_1==10 && cnt_0==11)
				flag=3;
			if(cnt_1==cnt_0+2 && flag==3)
			{
				flag=1;
				break;
			}
			else if(cnt_0==cnt_1+2 && flag==3)
			{
				flag=2;
				break;
			}	
		}
		if(flag==1)
			cout << "WIN" << endl;
		else if(flag==2)
			cout << "LOSE" << endl;
	}
}