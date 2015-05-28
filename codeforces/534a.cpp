#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cin >> n;
	if(n==1){
		cout << "1"<<endl<<"1";
		return 0;
	}
	if(n==2)
	{
		cout << "1"<<endl<<"1";
		return 0;
	}
	if(n==3)
	{
		cout << "2"<<endl<< "1 3";
		return 0;
	}
	if(n==4)
	{
		cout << "4"<<endl<<"3 1 4 2";
		return 0;
	}
	cout << n << endl;
	for(i=n-1;i>0;i-=2)
		cout << i << " ";
	for(i=n;i>0;i-=2)
		cout << i << " ";
	return 0;
}