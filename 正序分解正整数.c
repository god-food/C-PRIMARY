#include<stdio.h>
#include<math.h>
int main()
{
	int number,numbers;
	int digit,count=0; 
	int i,n=1;
	
	printf("输入一个非负整数：");
	scanf("%d",&number);
	
	numbers=number;
	
	do
	{
		count++;
		numbers/=10;
	}
	while(numbers);
	
	n=pow(10,count-1);
	
	for(i=count;i>0;i--)
	{
		digit=number/n;
		number%=n;
		n/=10;
		printf("%d ",digit);
	}
	
	printf("\n");
	printf("%d",count);
	
	return 0;
}
