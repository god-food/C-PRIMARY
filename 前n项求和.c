#include<stdio.h>
int main()
{
	int i,n;
	double I,sum=0.0;
	
	printf("�����������ӵ�λ����");
	scanf("%d",&n);
	
	printf("��������͵����");
	scanf("%lf",&I);
	
	for(i=1;i<=n;i++)
	{
		sum+=I/i;
	}
	
	printf("�Ȳ����е�ǰ%d�����ֵ:\n sum=%f",n,sum);
	
	return 0;
}
