#include <stdio.h>
#include <string.h>
 
int main(){
    int T; int i; int l;
    char arr[10];
    gets(arr);
    T=atoi(arr);
    while(T--){
        gets(arr);
        l=strlen(arr);
        if(l!=5) {printf("Error\n"); continue;}
            if(((arr[0]>='a' && arr[0]<='h') && (arr[3]>='a' && arr[3]<='h'))  && ((arr[1]>='1' && arr[1]<='8') && (arr[4]>='1' && arr[4]<='8')) && arr[2]=='-' )
            {
                if(abs((arr[0]-arr[3])*(arr[1]-arr[4]))==2)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
            else {printf("Error\n"); continue;}
        }
    return 0;
    }