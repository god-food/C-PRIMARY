#include<stdio.h>
int main(void)
{
	int x,a,b,c,d;
	printf("������һ����λ������:\n");
	scanf("%d",&x);
	
	a=x/100;
	b=x%100;
	c=b/10;
	d=b%10;
	printf("������λ��Ϊ��%d",d*100+c*10+a);
}
