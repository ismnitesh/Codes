#include <stdio.h>
#include <string.h>
#include <math.h>
void displayPathtoPrincess(int n, char grid[101][101])
{
    int i,j,pi,pj,mi,mj;
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
            if(grid[i][j]=='p')
            {
                pi=i;
                pj=j;
            }
            if(grid[i][j]=='m')
            {
                mi=i;
                mj=j;
            }
        }
      }
    if(mi<pi && mj<pj)
    {
       for(i=pi-mi;i>0;i--)
           printf("DOWN\n");
       for(i=pj-mj;i>0;i--)
           printf("RIGHT\n");
    }
    else if(mi<pi && mj>pj)
    {
        for(i=pi-mi;i>0;i--)
            printf("DOWN\n");
        for(i=mj-pj;i>0;i--)
            printf("LEFT\n");
    }
    else if(mi>pi && mj<pj)
    {
        for(i=mi-pi;i>0;i--)
            printf("UP\n");
        for(i=pj-mj;i>0;i--)
            printf("RIGHT\n");
    }
    else
    {
        for(i=mi-pi;i>0;i--)
            printf("UP\n");
        for(i=mj-pj;i>0;i--)
            printf("LEFT\n");
    }
}
int main(void) {

    int m;
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}