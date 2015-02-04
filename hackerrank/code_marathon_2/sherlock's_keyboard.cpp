#include<bits/stdc++.h>
using namespace std;
string s;
int n,m,l,x,y;
char a[55][55];
void func(int x,int y,int length,vector<string>& v)
{   
    static string s="";
    s=s+a[x][y];
    if(length==1)
    {
        v.push_back(s);
        return;
    }
    else
    {
        if(x>0 && a[x][y-1]!='*')
        {      
             func(x,y-1,length-1,v);
             s.resize(s.length()-1);
        }
        if(y>0 && a[x-1][y]!='*'){

            func(x-1,y,length-1,v);
            s.resize(s.length()-1);
        }
        if(x<n-1 && a[x][y+1]!='*'){

            func(x,y+1,length-1,v);
            s.resize(s.length()-1);
        }
        if(y<m-1 && a[x+1][y]!='*'){
             func(x+1,y,length-1,v);
             s.resize(s.length()-1);
         }
    }
}
int main()
{
    int i;
    vector<string> v;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    scanf("%d%d%d",&l,&x,&y);
    x--;
    y--;
    func(x,y,l,v);
    for(i=0;i<v.size();i++)
        cout << v[i] << endl;
    return 0;
}