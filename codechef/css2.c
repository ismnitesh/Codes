#include<stdio.h>
int a[1000006][4]={0};
int main()
{
	int n,m,id,attr,val,pri,qid,ans,qattr,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d",&id,&attr,&val,&pri);
		a[i][0]=id;
		a[i][1]=attr;
		a[i][2]=val;
		a[i][3]=pri;
	}
	while(m--)
	{
		scanf("%d%d",&qid,&qattr);
		pri=0;
		for(i=0;i<n;i++)
		{
			if(a[i][0]==qid && a[i][1]==qattr && a[i][3]>=pri)
			{
				ans=a[i][2];
				pri=a[i][3];
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}