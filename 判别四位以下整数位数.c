#include<stdio.h>

int main()
{
	int i,j=4;
	
	printf("������һ��0��9999����������");
	scanf("%d",&i);
	
	if(i>9999){
		printf("input error!");
	} else if (i>999){
		printf("������Ϊ%dλ������",j);
	}else if(i>99){
		j=3;
		printf("������Ϊ%dλ������",j);
	}else if(i>9){
		j=2;
		printf("������Ϊ%dλ������",j);
	}else if(i>=0){
		j=1;
		printf("������Ϊ%dλ������",j);
	}else 
		printf("input error!"); 
		
	return 0;
 } 
