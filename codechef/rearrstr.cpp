#include <bits/stdc++.h>
using namespace std;
bool func(pair<int,int>i,pair<int,int>j)
{
	return (i.second>j.second); 
}
int main()
{
	int t,flag,i,len,a[27],j;
	pair<int,int> p;
	vector< pair<int,int> > v;
	char s[100003],ans[100003];
	scanf("%d",&t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		scanf("%s",s);
		len=strlen(s);
		for(i=0;i<len;i++)
			a[s[i]-'a']++;
		for(i=0;i<26;i++)
		{
			p=make_pair(i,a[i]);
			v.push_back(p);
		}
		sort(v.begin(),v.end());
		j=0;
		flag=0;
		for(i=0; i<len; i+=2)
		{
			while(!v[j].second && j<len)
				j++;
			ans[i] = v[j].first+'a';
			v[j].second--;
		}
		for(i=1; i<len; i+=2)
		{
			while(!v[j].second && j<len)
				j++;
			ans[i] = v[j].first+'a';
			v[j].second--;
		}
		for(i=1; i<len; i++)
		{
			if(ans[i-1]==ans[i])
				flag =1;
		}
		if(flag)
			cout << "-1\n";
		else
		{
			for(i=0;i<len;i++)
				cout << ans[i];
			cout << endl;
		}
		
	}
	return 0;
}