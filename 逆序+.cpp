#include<stdio.h>
int main(void){
	
	int x,a,b,c,d;
	printf("请输入一个正三位数：\n");
	scanf("%d",&x);
	
	a=x%10;//个位数 
	d=x/10;
	b=d%10;// 十位数 
	c=x/100;//百位数 
	
	printf("逆序的三位数为:\n%d",a*100+b*10+c*1);
	
	return 0;
} 
