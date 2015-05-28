#include <iostream>
#include <string.h>
#include <stdio.h>
 
using namespace std;
 
long long int CeilIndex(long long int A[], long long int l, long long int r, long long int key) {
    long long int m;
 
    while( r - l > 1 ) {
        m = l + (r - l)/2;
        (A[m] > key ? r : l) = m;
    }
 
    return r;
}
 
long long int LIS(long long int A[], long long int size) {
    
 
    long long int *tt   = new long long int[size];
    long long int len; 
 
    memset(tt, 0, sizeof(tt[0])*size);
 
    tt[0] = A[0];
    len = 1;
    for( long long int i = 1; i < size; i++ ) {
        if( A[i] < tt[0] )
            tt[0] = A[i];
        else if( A[i] >= tt[len-1] )
            tt[len++] = A[i];
        else
            tt[CeilIndex(tt, -1, len-1, A[i])] = A[i];
    }
 
    delete[] tt;
 
    return len;
}

int main() {

    long long int n,i;
    cin>>n;
    long long int A[n];
    for(i=0;i<n;i++)
    {
      scanf("%lld",&A[i]);
    }
 
    printf("%lld\n",n-LIS(A, n));
 
    return 0;
}