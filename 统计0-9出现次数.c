#include<stdio.h>
int main()
{	const int number=10;
	int x,i;
	int count[number];
	
	for(i=0;i<number;i++)
	{
		count[i]=0;
	}
	
	printf("��һ�����ǣ�");
	scanf("%d",&x);
	while(x!=-1)
	{
		if(x>=0&&x<=number-1)
	
		count[x]++;
		
		printf("��һ�����ǣ�");
		scanf("%d",&x);
	}
	
	for(i=0;i<number;i++)
		
		printf("%d:%d\n",i,count[i]); 
	
	
	return 0;
}
