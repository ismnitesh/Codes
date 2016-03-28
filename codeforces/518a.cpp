#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,f=0,i,diff=0,ind;
	char s[104],t[104];
	cin >> s >> t;
	l=strlen(s);
	for(int i=0;i<l;i++)
	{
		if((t[i]-'a')-(s[i]-'a')>1 || diff==1)
		{
			if(s[i]!='z')
			{
				s[i]++;
				f=1;
				break;
			}
		}
		if((t[i]-'a')-(s[i]-'a')==1)
		{
			diff=1;
			ind=i;
		}
	}
	if(f==0 && diff==1 && ind!=l-1)
	{
		for(int i=ind+1;i<l;i++)
		{
			if(t[i]>'a')
			{
				s[ind]=t[ind];
				f=1;
				for(int j=ind+1;j<l;j++)
					s[j]='a';
				break;
			}
		}
	}
	if(f)
		cout << s;
	else
		cout << "No such string";
	return 0;
}