#include <iostream>
using namespace std;
int main()
{
    char a;
    string r,s="qwertyuiopasdfghjkl;zxcvbnm,./";
    int i=0,j;
    cin >> a >> r;
    while(r[i])
    {
        for(j=0;r[i]!=s[j];j++){}
        if(a=='L')
            cout << s[j+1];
        else
            cout << s[j-1];
        i++;
    }
    return 0;
}