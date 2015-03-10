#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SENTINEL (-1)
#define EDIT_COST (1)
inline int min(int a, int b)
{
   return a < b ? a : b;
}
int Minimum(int a, int b, int c)
{
    return min(min(a, b), c);
}
 
int EditDistanceDP(char X[], char Y[])
{
    int cost = 0;
    int leftCell, topCell, cornerCell;
    int m = strlen(X)+1;
    int n = strlen(Y)+1;
    int *T = (int *)malloc(m * n * sizeof(int));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            *(T + i * n + j) = SENTINEL;
    for(int i = 0; i < m; i++)
        *(T + i * n) = i;
    for(int j = 0; j < n; j++)
        *(T + j) = j;
    for(int i = 1; i < m; i++)
    {
        for(int j = 1; j < n; j++)
        {
            
            leftCell = *(T + i*n + j-1);
            leftCell += EDIT_COST;
            topCell = *(T + (i-1)*n + j);
            topCell += EDIT_COST;
            cornerCell = *(T + (i-1)*n + (j-1) );
            cornerCell += (X[i-1] != Y[j-1]); 
            *(T + (i)*n + (j)) = Minimum(leftCell, topCell, cornerCell);
        }
    } 
    cost = *(T + m*n - 1);
    free(T);
    return cost;
}
int main()
{
    int t;
    char X[2006],Y[2006];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",X,Y); 
        printf("%d\n",EditDistanceDP(X,Y));
    }
    return 0;
}