#include <iostream>
using namespace std;
int main()
{
	int n,i,num,x=0,y=0,max_x=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> num;
		if(num)
			y++;
		if(!num)
		{
			x++;
			if(x>max_x)
				max_x=x;
		}
		else if(x>0)
			x--;
	}
	if(!max_x)
		max_x--;
	cout << y+max_x;
	return 0;
}