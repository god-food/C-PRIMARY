#include<stdio.h>
int main()
{	
	const int max=10;
	int i,x;
	double sum=0.0,average;
	int count=0;
	int number[max];//定义数组 
	
	printf("第一个数字：");
	scanf("%d",&x); 
	while(x!=-1)
	{
		number[count]=x;//初始化数组 
		sum+=x;
		count++;
		printf("下一个数字：");
		scanf("%d",&x);
	}
	average=sum/count;
	
	for(i=0;i<count;i++)
	{
		printf("number[%d]=%d ",i,number[i]);
	}
	printf("\n");
	
	printf("以上统计数据的平均数值：%f\n",sum/count);
	
	printf("大于平均数值的统计数：");
	for(i=0;i<count;i++)
	{
		if(number[i]>average)
			printf("%d ",number[i]);
	}
	
	return 0;
}
