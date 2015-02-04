#include<bits/stdc++.h>
using namespace std;
char a[55][55];
int n,m;
struct s 
{
	int i,j,count;
};
int check(int i,int j,int count)
{
	stack < struct s > st;
	struct s current,cell;
	current.i=i;
	current.j=j;
	current.count=count;
	st.push(current);
	int k=4;
	while(!st.empty() && k--)
	{
		current=st.top();
		cout << current.i <<current.j << current.count << endl;
		st.pop();
		if(current.i==i && current.j==j && current.count==3)
			return 1;
		else if(current.j+1<m && a[current.i][current.j+1]==a[current.i][current.j] && current.count==0)
		{
			cell.i=i;
			cell.j=j+1;
			cell.count=0;
			cout<<"i am here 1"<<endl;
			st.push(cell);
		}
		else if(current.i+1<n && current.count==0 && a[current.i+1][current.j]==a[current.i][current.j])
		{
			cell.i=i+1;
			cell.j=j;
			cell.count=1;
			cout<<"i am here 2"<<endl;
			st.push(cell);
		}
		else if(current.i+1<n && current.count==1 && a[current.i+1][current.j]==a[current.i][current.j])
		{
			cell.i=i+1;
			cell.j=j;
			cell.count=1;
			cout<<"i am here 3"<<endl;
			st.push(cell);	
		}
		else if(current.j-1>=0 && current.count==1 && a[current.i][current.j-1]==a[current.i][current.j])
		{
			cell.i=i;
			cell.j=j-1;
			cell.count=2;
			cout<<"i am here 4"<<endl;
			st.push(cell);	
		}
		else if(current.j-1>=0 && current.count==2 && a[current.i][current.j-1]==a[current.i][current.j])
		{
			cell.i=i;
			cell.j=j-1;
			cell.count=2;
			cout<<"i am here 5"<<endl;
			st.push(cell);	
		}
		else if(current.i-1>=0 && (current.count==2 || current.count==3) && a[current.i-1][current.j]==a[current.i][current.j])
		{
			cell.i=i-1;
			cell.j=j;
			cell.count=3;
			cout<<"i am here 6"<<endl;
			st.push(cell);
		}
		cout << "checked"<<endl;
	}
	return 0;
}
int main()
{
	int i,j;
	cin >> n >> m;
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	int flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			flag=check(i,j,0);
		//	cout << "checked"<<endl;
			if(flag)
				break;
		}
		if(flag)
			break;
	}
	if(flag)
		cout << "Yes";
	else
		cout<< "No";
	return 0;
}