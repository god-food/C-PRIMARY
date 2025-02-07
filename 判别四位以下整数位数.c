#include<stdio.h>

int main()
{
	int i,j=4;
	
	printf("请输入一个0到9999的正整数：");
	scanf("%d",&i);
	
	if(i>9999){
		printf("input error!");
	} else if (i>999){
		printf("该整数为%d位整数。",j);
	}else if(i>99){
		j=3;
		printf("该整数为%d位整数。",j);
	}else if(i>9){
		j=2;
		printf("该整数为%d位整数。",j);
	}else if(i>=0){
		j=1;
		printf("该整数为%d位整数。",j);
	}else 
		printf("input error!"); 
		
	return 0;
 } 
