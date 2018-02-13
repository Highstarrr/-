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
 	int i,j,n,sum=0,t=0,k;
 	for(i=0;i<5;i++)
 	{
 		scanf("%d %d %d",&pgr[i].s,&pgr[i].k,&pgr[i].q);
	 }
		for(j=1;j<=10;j++)
		{
		for(i=0;i<5;i++)
		{
			if(pgr[i].q-pgr[i].k>0)
		sum+=pgr[i].s+(pgr[i].k-1)*2+abs(pgr[i].q-pgr[i].k)+1;		
		}
		t+=2*(j-1);
		printf("%d时，停靠在%d楼\n",t,j);
	}
	for(k=10;k>0;k--)
	{
		for(i=0;i<5;i++)
		{
		if(pgr[i].q-pgr[i].k<0)
		sum+=pgr[i].s+(pgr[i].k-1)*2+abs(pgr[i].q-pgr[i].k)+1;
	}
	t+=2*(10-k);
	printf("%d时，停靠在%d楼\n",t,k);
	}
	printf("%d",sum);
	 return 0;
 }
