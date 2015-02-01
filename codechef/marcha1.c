#include<stdio.h>
int posbl(int *a,int i,int m)
{
    if(m==0) return(1);
    if(i<0 || m<0) return(0);
    return(posbl(a,i-1,m-a[i]) || posbl(a,i-1,m));
}
int main()
{
    int t,m,n,i;
    int a[20];
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        if(posbl(a,n-1,m)) printf("Yes\n");
        else printf("No\n");
    }
return(0);
}