#include<stdio.h>
int main()
{	
	const int max=10;
	int i,x;
	double sum=0.0,average;
	int count=0;
	int number[max];//�������� 
	
	printf("��һ�����֣�");
	scanf("%d",&x); 
	while(x!=-1)
	{
		number[count]=x;//��ʼ������ 
		sum+=x;
		count++;
		printf("��һ�����֣�");
		scanf("%d",&x);
	}
	average=sum/count;
	
	for(i=0;i<count;i++)
	{
		printf("number[%d]=%d ",i,number[i]);
	}
	printf("\n");
	
	printf("����ͳ�����ݵ�ƽ����ֵ��%f\n",sum/count);
	
	printf("����ƽ����ֵ��ͳ������");
	for(i=0;i<count;i++)
	{
		if(number[i]>average)
			printf("%d ",number[i]);
	}
	
	return 0;
}
