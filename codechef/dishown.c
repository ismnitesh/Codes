#include<stdio.h>

// http://www.codechef.com/JULY14/problems/DISHOWN

typedef struct node{
	int score;
	int cook;
} node;

int find_owner(int dish_num, node in[], int owner[])
{
	int i = dish_num;
	while(owner[i] != in[i].cook)
		i = owner[i];

	return i+1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);

		node in[n];
		int owner[n];

		for(i=0; i<n; i++)
		{
			scanf("%d",&in[i].score);
			in[i].cook = i;
			owner[i] = i;
		}

		int q,q_type;
		scanf("%d",&q);
		for(i=0; i<q; i++)
		{
			scanf("%d",&q_type);
			if(q_type)
			{
				int x;
				scanf("%d",&x);
				x--;
				printf("%d\n",find_owner(x, in, owner));
			}

			else
			{
				int x, y;
				scanf("%d %d",&x,&y);
				x--; y--;

				int x_owner = find_owner(x,in,owner);
				int y_owner = find_owner(y,in,owner);

				if(x_owner == y_owner)
					printf("Invalid query!\n");
				else
				{
					x_owner--; y_owner--;
					if(in[x_owner].score > in[y_owner].score)
						owner[y_owner] = owner[y] = owner[x] = x_owner;
					else if(in[x_owner].score < in[y_owner].score)
						owner[x_owner] = owner[x] = owner[y] = y_owner;
				}
			}
		}
	}
return 0;
}
