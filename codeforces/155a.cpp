#include <iostream>
using namespace std;
int main()
{
	int n,min,max,i,count,num;
	cin >> n;
	n--;
	cin >> num;
	min=num;
	max=num;
	count=0;
	for(i=0;i<n;i++)
	{
		cin >> num;
		if(num>max)
		{
			count++;
			max=num;
		}
		if(num<min)
		{
			count++;
			min=num;
		}
	}
	cout << count;
	return 0;
}