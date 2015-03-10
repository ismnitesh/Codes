#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,l,ans=0,a[10]={6,2,5,5,4,5,6,3,7,6};
	char s[105];
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
		ans=ans+a[s[i]-'0'];
	printf("%d",ans);
	return 0;
}