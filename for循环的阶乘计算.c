#include<stdio.h>
int main(avoid)
{
	int n,fact=1;
	
	printf("请输入要计算的阶乘阶数\n");
	scanf("%d",&n);
	
	int i=1; 
	for(;i<=n;i++)  //变量i数字类型可在for语句内部定义，前提是要在C99下编译加入"-std=c99";for(int i=1;i<=n;i++); 
	{				//for==while;for(;条件;)==while(条件); 
		fact*=i;	/* for(i=1;条件;i++){}等价于i=1;while(条件){;i++};*/
	}
	
	printf("%d!=%d",n,fact);
 } 
 /*	如果有固定循环次数，用for;
 	如果必须执行一次，用do_while； 
	其他情况用while； 
	for可与while相互转换； 			
*/ 
