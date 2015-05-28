#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,s,a[104],i,t;
	cin >> m >> s;
	t=s;
	if(m==1 && s==0){
		cout << "0 0";
		return 0;
	}
	if(s == 0 || s > 9*m)
		cout << "-1 -1";
	else
	{
		for(i=0;i<m;i++)
			a[i]=0;
		a[0]=1;
		s--;
		for(i=m-1;i>=0;i--)
		{
			if(s>=9-a[i])
			{
				s-=(9-a[i]);
				a[i]=9;
			}
			else
			{
				a[i]+=s;
				s=0;
				break;
			}
		}
		s=t;
		for(i=0;i<m;i++)
			cout << a[i];
		for(i=0;i<m;i++)
			a[i]=0;
		a[0]=1;
		s--;
		for(i=0;i<m;i++)
		{
			if(s>=9-a[i])
			{
				s-=9-a[i];
				a[i]=9;
			}
			else
			{
				a[i]+=s;
				s=0;
				break;
			}
		}
		cout << " ";
		for(i=0;i<m;i++)
			cout << a[i];
	}
	return 0;
}