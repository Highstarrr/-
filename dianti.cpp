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
			if(pgr[i].q==0)
		{
				m=10+pgr[i].s;
				printf("%dʱ��ͣ����10¥\n",m);
			}
			else
			{
			m=2*pgr[i].k+pgr[i].s+1;
			printf("%dʱ��ͣ����1¥\n",m);
		}
		sum+=m;
		}
			if(m>=pgr[i+1].s)
			if(pgr[i+1].q==0)
			if(pgr[i].s+pgr[i].k>pgr[i+1].s)//�ж��¸������Ƿ���һ��ִ�� 
		//˼���С��������� 
		 } 
		 printf("%d",sum);
	 return 0;
 }
