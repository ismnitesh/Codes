#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,sum,l,i,f,ans;
	char s[100003];
	cin >> t;
	while(t--)
	{
		cin >> s;
		l=strlen(s);
		sum=0;
		for(i=0;i<l;i++)
			sum=sum+s[i]-'0';
		sum=sum%9;
		if(sum>9-sum)
			sum=9-sum;
		ans=sum;
		f=0;
		for(i=l-1;i>=1;i--)
		{
	//		cout << "hii";
			sum-=s[i]-'0';
			if(sum<=0){
				f=1;
				break;
			}
		}
		if(sum>=s[0]-'0' && f!=1 && l>1)
			ans=9-ans;
		cout << ans << endl;
	}
	return 0;
}