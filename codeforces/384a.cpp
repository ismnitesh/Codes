#include <iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin >> n;
	if(n%2==0)
		cout << (n/2)*n << endl;
	else
		cout << ((n/2)+(n/2+1))*(n/2)+(n/2+1) << endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i+j)%2)
				cout << ".";
			else
				cout << "C";
		}
		cout << endl;
	}
	return 0;
}