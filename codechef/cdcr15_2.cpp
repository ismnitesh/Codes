#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,y,z,ti,data,buffer;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&x,&y,&z);
		data=(x*z)-(y*z);
		ti=0;
		buffer=0;
		while(buffer<data)
		{
			ti++;
			buffer=buffer+y;
		}
		printf("%d\n",ti);
	}
	return 0;
}