#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,white=0,black=0,weight[200];
	char ch;
	memset(weight,0,200*sizeof(int));
	weight['q']=9;
	weight['r']=5;
	weight['b']=3;
	weight['n']=3;
	weight['p']=1;
	for(i=0;i<64;i++)
	{
		cin >> ch;
		if(ch>='a' && ch<='z')
		{
			black+=weight[ch];
		}
		else if(ch>='A' && ch<='Z')
		{
			ch=ch-'A'+'a';
			white+=weight[ch];
		}
	}
	if(white > black)
		cout << "White";
	else if(white < black)
		cout << "Black";
	else
		cout << "Draw";
	return 0;
}