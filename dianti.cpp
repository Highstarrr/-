#include<stdio.h>
#include<math.h>
struct pgr
{
	int s;
	int k;
	int q;
 }pgr[5],temp;
int main()
 {
 	int i,m,a,sum;
 	for(i=0;i<5;i++)
 	{
 		scanf("%d %d %d",&pgr[i].s,&pgr[i].k,&pgr[i].q);//输入请求 
	 }
	
	 for(i=1;i<5;i++)
	 {
	 	if(pgr[i].s<pgr[i-1].s)
	 	{
	 		temp=pgr[i];
	 		pgr[i]=pgr[i-1];
	 		pgr[i-1]=temp;
		 }
	}//按请求时刻排序 
		for(i=0;i<5;i++)
		{
			if(pgr[i].q==0)
		{
				m=10+pgr[i].s;
				printf("%d时，停靠在10楼\n",m);
			}
			else
			{
			m=2*pgr[i].k+pgr[i].s+1;
			printf("%d时，停靠在1楼\n",m);
		}
		sum+=m;
		}
			if(m>=pgr[i+1].s)
			if(pgr[i+1].q==0)
			if(pgr[i].s+pgr[i].k>pgr[i+1].s)//判断下个请求是否能一起执行 
		//思索中。。。。。 
		 } 
		 printf("%d",sum);
	 return 0;
 }
