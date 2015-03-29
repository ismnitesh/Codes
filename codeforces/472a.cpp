#include <iostream>
#include <string.h>
using namespace std;
int p[1000006];
void gen()
{
	int i,j,n=1000005;
	memset(p,0,sizeof(int)*n);
	for(i=3;i<=n;i+=2)
	{
		if(p[i]==0)
		{
			for(j=i+i;j<=n;j+=i)
				p[j]=1;
		}
	}
}
int main()
{
	gen();
	int i,n;
/*	for(i=0;i<100;i++)
		if(p[i]==1)
		cout << i << " ";*/
	cin >> n;
	for(i=4;i<n;i++)
	{
		if((p[i]==1 || i%2==0) && (p[n-i]==1||(n-i)%2==0)){
			cout << i << " " << n-i;
			break;
		}
	}
	return 0;
}