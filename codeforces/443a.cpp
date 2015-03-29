#include <bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	int i,a[27],cnt=0;
	for(i=0;i<27;i++)
		a[i]=0;
	scanf("%c",&ch);
	while(ch!='}')
	{
		if(ch>='a' && ch<='z')
		{
			a[ch-'a']++;
		}
		scanf("%c",&ch);
	}
	for(i=0;i<26;i++)
	{
		if(a[i])
			cnt++;
	}
	cout << cnt;
	return 0;
}