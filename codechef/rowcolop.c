#include<stdio.h>
long int row[314159]={0},column[314159]={0};
int main()
{
    long int N,Q,r,X,max1,max2,i;
    char ch[24];
    scanf("%ld %ld",&N,&Q);
    
    
    while(Q--)
    {
        scanf("%s %ld %ld",&ch,&r,&X);
        if(ch[0]=='R')
         {   row[r]+=X;
         
         }
        if(ch[0]=='C')
            column[r]+=X;
    }
    max1=row[1];
    max2=column[1];
    for(i=2;i<=N;i++)
    {
        if(row[i]>max1)
            max1=row[i];
        if(column[i]>max2)
            max2=column[i];
    }
    printf("%ld\n",(max1+max2));
    return 0;
#include<stdio.h>
long int row[314159]={0},column[314159]={0};
int main()
{
    long int N,Q,r,X,max1,max2,i;
    char ch[24];
    scanf("%ld %ld",&N,&Q);
    
    
    while(Q--)
    {
        scanf("%s %ld %ld",&ch,&r,&X);
        if(ch[0]=='R')
         {   row[r]+=X;
         
         }
        if(ch[0]=='C')
            column[r]+=X;
    }
    max1=row[1];
    max2=column[1];
    for(i=2;i<=N;i++)
    {
        if(row[i]>max1)
            max1=row[i];
        if(column[i]>max2)
            max2=column[i];
    }
    printf("%ld\n",(max1+max2));
    return 0;
}