#include<stdio.h>

int main(avoid)
{
	int a=5,b=6,c;
	
	printf("������a,b��ֵ�ֱ�Ϊ��"); 
	
	scanf("%d %d",&a,&b);
	 
	c=a;
	a=b; 
	b=c;
	
	printf("a=%d,b=%d",a,b);
	
 } 
