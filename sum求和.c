#include<stdio.h>
int main()
{
	int n,i,sum=0;
	int number;
	
	printf("������������ĸ�����");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&number);
		
		sum+=number;
		printf("%d;%d\n",number,sum);
	}
	printf("sum=%d",sum);
	
	return 0; 
}
