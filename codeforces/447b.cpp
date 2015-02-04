#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[26],i,k,l;
	string s;
	cin >> s;
	l=s.size();
	scanf("%d",&k);
	int max=0;
	for(i=0;i<26;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];
	}
	int ans=0;
	for(i=0;i<l;i++)
		ans=ans+(i+1)*a[s[i]-97];
	for(i=l+1;i<=k+l;i++)
	ans=ans+max*i;
	printf("%d",ans);
	return 0;
}