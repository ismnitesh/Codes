#include<bits/stdc++.h>
using namespace std;
string inttos(int x)
{
	string s="";
	while(x)
	{
		char ch=(x%10)+'0';
		s=ch+s;
		x=x/10;
	}
	return s;
}
int main()
{
	int t,h,a_m,a_h,diff;
	double a;
	vector<string>v[181];
	for(int m=0;m<720;m=m+2)
	{
		h=m/60;
		a_m=((m*6)%360);
		a_h=m/2;
		diff=abs(a_h-a_m);
		if(diff>180)
			diff=360-diff;
		string s="";
		if(h>=10)
		{
			s+=inttos(h);
			s+=':';
		}
		else
		{
			s+='0';
			s+=h+'0';
			s+=':';
		}
		int minute=m%60;
		if(minute>=10)
			s+=inttos(minute);
		else
		{
			s+='0';
			s+=minute+'0';
		}
		v[diff].push_back(s);
	}
	cin >> t;
	while(t--)
	{
		cin >> a;
		if(a==(int)a)
		{
			int d=a;
			for(int i=0;i<v[d].size();i++)
				cout << v[d][i] << endl;
		}
		else
		{
			for(int m=1;m<720;m=m+2)
			{
				h=m/60;
				double f_a_m=m*6.0;
				while(f_a_m>=360.0)
					f_a_m-=360.0;
				double f_a_h=m/2.0;
				double f_diff=abs(f_a_h-f_a_m);
				if(f_diff>180.0)
					f_diff=360.0-f_diff;
				if(abs(f_diff-a)<(1.0/120.0))
				{
					string s="";
					if(h>=10)
					{
						s+=inttos(h);
						s+=':';
					}
					else
					{
						s+='0';
						s+=h+'0';
						s+=':';
					}
					int minute=m%60;
					if(minute>=10)
						s+=inttos(minute);
					else
					{
						s+='0';
						s+=minute+'0';
					}
					cout << s << endl;
				}
			}
		}
	}
	return 0;
}