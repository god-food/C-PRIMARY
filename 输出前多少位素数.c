#include<stdio.h>
int main()
{
	int n;
	
	printf("������Ҫͳ��ǰ���ٸ�������");
	scanf("%d",&n);
	
	int i,count=0,j;
	for(i=2;count<n;i++)
	{
		int isPrime=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				isPrime--;
				break;
			}
		}
		if(isPrime)
		{
			count++ ;
			printf("%d ",i);
		}
	}
	printf("\n");
	
	return 0;
}
