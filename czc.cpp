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
 	int i,n=1,a=0,sum=0;
 	for(i=0;i<5;i++)
 	{
 		scanf("%d %d %d",&pgr[i].s,&pgr[i].k,&pgr[i].q);//�������� 
	 }
	
	 for(i=1;i<5;i++)
	 {
	 	if(pgr[i].s<pgr[i-1].s)
	 	{
	 		temp=pgr[i];
	 		pgr[i]=pgr[i-1];
	 		pgr[i-1]=temp;
		 }
	}//������ʱ������ 
		for(i=0;i<5;i++)
		{
			a+=pgr[i].s+fabs(pgr[i].q-n);
			n=pgr[i].q;
			sum+=a;
			printf("%dʱ��ͣ����%d¥\n",a,n);
		 } 
		 printf("%d",sum);
	 return 0;
 }
