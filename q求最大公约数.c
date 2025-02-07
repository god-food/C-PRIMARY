#include<stdio.h>
int main()
{
	int a,b,mid;
	
	printf("输入两个数：");
	scanf("%d %d",&a,&b);
	 
	printf("\n"); 
	printf("输出二者的最大公约数：\n");
	
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
