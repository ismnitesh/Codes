#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	char s[1000];
	int l,i,flag=0;
	cin >> s;
	l=strlen(s);

	for(i=0;i<l;i++)
	{
		if(s[i]=='9' && flag==0)
		{
			cout << "9";
			flag=1;
			continue;
		}
		if(s[i]>'4')
		{
			s[i]='9'-s[i]+'0';
			flag=1;
			cout << s[i];
		}
		else{
			cout << s[i];
			flag=1;
		}
	}
	return 0;
}