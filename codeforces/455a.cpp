#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,num,f[100003],i,sum=0,x,y,max=0;
	cin >> n;
	memset(f,0,sizeof(f));
	for(i=0;i<n;i++)
	{
		cin >> num;
		if(num>max)
			max=num;
		f[num]++;
	}
	for(i=2;i<=100000;i++)
	{
		f[i]=(long long)i*f[i];
		f[i]+=f[i-2];
		if(f[i-1]>f[i])
			f[i]=f[i-1];
	}
	cout << f[100000];
	return 0;
}