#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	char str1[100],str2[100],str3[100],opr1,opr;
	cin >> t;
	while(t--)
	{
		cin>>str1>>opr>>str2>>opr1>>str3;
		if(strchr(str1,'m')!=NULL)
		{
			int y=atoi(str2);
			int z=atoi(str3);
			int l=z-y;
			cout<<l<<" + "<<y<<" = "<<z<<endl;
		}
		else if(strchr(str2,'m')!=NULL)
		{
			int x=atoi(str1);
			int z=atoi(str3);
			int l=z-x;
			cout<<x<<" + "<<l<<" = "<<z<<endl;
		}
		else if(strchr(str3,'m')!=NULL)
		{
			int x=atoi(str1);
			int y=atoi(str2);
			int l=x+y;
			cout<<x<<" + "<<y<<" = "<<l<<endl;
		}
	}
	return 0;
}