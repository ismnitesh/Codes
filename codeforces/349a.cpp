#include <iostream>
using namespace std;
int main()
{
	int n,i,a[100005],b[2],flag=1;
	b[0]=0;
	b[1]=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]==25){
			b[0]++;
		}
		else if(a[i]==50){
			b[0]--;
			b[1]++;
		}
		else if(a[i]==100){
			if(b[1]>0)
			{
				b[1]--;
				b[0]--;
			}
			else
				b[0]-=3;
		}
		if(b[0]<0 || b[1]<0)
		{
			flag=0;
			break;
		}
	}
	if(!flag)
		cout << "NO" ;
	else
		cout << "YES" ;
	return 0;
}