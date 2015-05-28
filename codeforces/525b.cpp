#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string s;
	char temp;
	int n,a,l,i,j;
	cin >> s >> n;
	l=s.size();
	for(i=0;i<n;i++)
	{
		cin >> a;
		if((a-1)<(l-a))
		{
			for(j=a-1;j<l/2;j++)
			{
				temp=s[j];
				s[j]=s[l-j-1];
				s[l-j-1]=temp;
			}
		}
		else
		{
			for(j=(l-a);j<l/2;j++)
			{
				temp=s[j];
				s[j]=s[l-j-1];
				s[l-j-1]=temp;
			}	
		}
	}
	cout << s;
	return 0;
}