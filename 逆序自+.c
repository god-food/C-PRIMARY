#include<stdio.h>
int main(void)
{
	int x,a,b,c,d;
	printf("请输入一个三位正整数:\n");
	scanf("%d",&x);
	
	a=x/100;
	b=x%100;
	c=b/10;
	d=b%10;
	printf("逆序三位数为：%d",d*100+c*10+a);
}
