#include<stdio.h>
int main()
{
	int t,x1,x2,y1,y2,xm,ym,v00,v01,v10,v11,v20,v21,v30,v31;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&xm,&ym);
		v00=(y2-y1)*(-y1)-(x2-x1)*(-x1);
		v01=(y2-y1)*(ym-y1)-(x2-x1)*(xm-x1);
		v10=(x2*y1)-(y2*x1);
		v11=(x2*ym)-(y2*xm);
		v20=(x1*y2)-(y1*x2);
		v21=(x1*ym)-(y1*xm);
		if((v00>0 && v01>0) || (v00<0 && v01<0))
			printf("YES\n");
		else
		{
			if(((v10>0 && v11<0) || (v10<0 && v11>0)) && ((v20>0 && v21<0)||(v20<0 && v21>0)))
				printf("YES\n");
			else if(v00==0 && v01==0 && v10==0 && v11==0 && v20==0 && v21==0)
			{
				v30=(ym)*(-ym)+(xm)*(-xm);
				v31=(ym)*((y1+y2)/2-ym)+(xm)*((x1+x2)/2-xm);
				if((v30>0 && v31<0) || (v30<0 && v31>0))
					printf("YES\n");
				else
					printf("NO\n");
			}
			else
				printf("NO\n");
		}
	}
	return 0;
}