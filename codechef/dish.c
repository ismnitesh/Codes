#include<stdio.h>
int scan()
{
    int n=0;
    int ch=getchar_unlocked();
    while(ch<'0'||ch>'9')
        ch=getchar_unlocked();
    while(ch>='0'&&ch<='9')
    {
        n=(n<<3)+(n<<1)+ch-'0';
        ch=getchar_unlocked();
    }
    return n;
}
int owner(int x,int change[])
{
    while(change[x]!=x)
    {
        x=change[x];
    }
    return x;
}
int main()
{
    int t,n,q,x,y,z,s[10004],c[10003],max[10004],i,mx,my,change[10004];
    t=scan();
    while(t--)
    {
        n=scan();
        for(i=1;i<=n;i++)
        {
            s[i]=scan();
            c[i]=i;
            max[i]=s[i];
            change[i]=i;
        }
        q=scan();
        while(q--)
        {
            z=scan();
            if(z==0)
            {
                x=scan();
                y=scan();
                mx=max[owner(c[x],change)];
                my=max[owner(c[y],change)];
                if(owner(c[x],change)==owner(c[y],change))
                    printf("Invalid query!\n");
                else if(mx>my)
                {
                    change[owner(c[y],change)]=owner(c[x],change);
                }
                else if(mx<my)
                {
                    change[owner(c[x],change)]=owner(c[y],change);
                }
            }
            else
            {
                x=scan();
                printf("%d\n",owner(c[x],change));
            }
        }
    }
    return 0;
}