#include<stdio.h>
int main(void){
	
	int x,a,b,c,d;
	printf("������һ������λ����\n");
	scanf("%d",&x);
	
	a=x%10;//��λ�� 
	d=x/10;
	b=d%10;// ʮλ�� 
	c=x/100;//��λ�� 
	
	printf("�������λ��Ϊ:\n%d",a*100+b*10+c*1);
	
	return 0;
} 
