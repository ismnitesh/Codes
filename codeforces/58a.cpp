#include <iostream>
using namespace std;
int main()
{
    int i,len;
    string s;
    cin >> s;
    len=s.length();
    int flag=0;
    for(i=0;i<len;i++)
    {
        if(s[i]=='h' && flag==0)
            flag=1;
        else if(flag==1 && s[i]=='e')
            flag=2;
        else if(flag==2 && s[i]=='l')
            flag=3;
        else if(flag==3 && s[i]=='l')
            flag=4;
        else if(flag==4 && s[i]=='o')
        {
            flag=5;
            break;
        }
    }
    if(flag==5)
        cout << "YES";
    else
        cout << "NO";
}