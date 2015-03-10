#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,la,lb,hash_a[26],hash_b[26],i;
	string a,b;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		la=a.size();
		lb=b.size();
		memset(hash_a,0,sizeof(hash_a));
		memset(hash_b,0,sizeof(hash_b));
		for(i=0;i<la;i++)
			hash_a[a[i]-97]++;
		for(i=0;i<lb;i++)
			hash_b[b[i]-97]++;
		int flag=0;
		for(i=0;i<26;i++)
		{
			if(hash_a[i]!=hash_b[i])
			{
				flag=1;
				break;
			}
		}
		if(flag)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}