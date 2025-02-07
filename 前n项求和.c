#include<stdio.h>
int main()
{
	int i,n;
	double I,sum=0.0;
	
	printf("请输入求和相加的位数：");
	scanf("%d",&n);
	
	printf("请输入求和的首项：");
	scanf("%lf",&I);
	
	for(i=1;i<=n;i++)
	{
		sum+=I/i;
	}
	
	printf("等差数列的前%d项求和值:\n sum=%f",n,sum);
	
	return 0;
}
