#include<stdio.h>
int main()
{
	int a,b,mid;
	
	printf("������������");
	scanf("%d %d",&a,&b);
	 
	printf("\n"); 
	printf("������ߵ����Լ����\n");
	
	while(b%a!=0)
	{
		b%=a;
		mid=a;
		a=b;
		b=mid;
	}
	
	printf("%d",a);
	
	return 0;
}
