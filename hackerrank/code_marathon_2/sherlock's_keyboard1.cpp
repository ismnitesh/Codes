#include<bits/stdc++.h>
using namespace std;
char board[55][55];
int check(char move,int a,int b)
{
	if(move=='l')
	{
		if(board[a][b-1]=='\0' || board[a][b-1]=='*')
			return 0;
		else
			return 1;
	}
	if(move=='r')
	{
		if(board[a][b+1]=='\0' || board[a][b+1]=='*')
			return 0;
		else
			return 1;
	}
	if(move=='u')
	{
		if(board[a-1][b]=='\0' || board[a-1][b]=='*')
			return 0;
		else
			return 1;
	}
	if(move=='d')
	{
		if(board[a+1][b]=='\0' || board[a+1][b]=='*')
			return 0;
		else
			return 1;
	}

}
void push_vector(vector<string>&v,int a,int b,int length)
{
	static string str="";
	str+=board[a][b];
	if(length<=1)
	{
		//cout<<"pushed"<<str<<endl;
		v.push_back(str);
		//str[str.length()-1]='\0';
		return;
	}
	if(check('l',a,b))
	{		
		push_vector(v,a,b-1,length-1);
		str.resize(str.length()-1);
	}
	if(check('r',a,b))
	{
		//cout<<"1";
		push_vector(v,a,b+1,length-1);
		str.resize(str.length()-1);
	}
	if(check('u',a,b))
	{
		push_vector(v,a-1,b,length-1);
		str.resize(str.length()-1);
	}
	if(check('d',a,b))
	{
		push_vector(v,a+1,b,length-1);
		str.resize(str.length()-1);

	}
	//str[str.length()-1]='\0';
}
int main()
{
	vector<string>v;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n+3;i++)
	{
		for(int j=0;j<n+3;j++)
		{
			board[i][j]='\0';
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cin>>board[i][j];
	}
	int length,x,y;
	cin>>length>>x>>y;
	push_vector(v,x,y,length);
	//cout<<"hello";
	
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}