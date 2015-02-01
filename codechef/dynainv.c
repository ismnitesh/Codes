#include <stdio.h>
 
int main(void) {
	// your code goes here
	int n, q, i, j, A[100001], inv=0, l, r;
	scanf("%d %d", &n, &q);
	for(i=1; i<n+1; i++)
		scanf("%d ", &A[i]);
	for(i=1; i<n; i++)
		for(j=i+1; j<n+1; j++)
			if(A[i]>A[j])
				inv++;
	while(q--)
	{
		scanf("%d %d", &l, &r);
		if(r>l)
		{
			if(A[r]>A[l])
				inv++;
			else if(A[l]>A[r])
				inv--;
		}
		
		else
		{
			if(A[l]>A[r])
				inv++;
			else if(A[l]<A[r])
				inv--;
		}
		
		printf("%d\n", (inv%2));
	}
	
	return 0;
}