#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("请问需要统计多少以内的素数："); 
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		int ret=1;
		for(j=2;j<i;j++)
			{
				ret=1; 
				while(i%j==0)
				{
					ret--;
					break;	
				} 
				if(ret==0)
					break;
			}
			if(ret)
			{
				printf("%d ",i);
			}
	}
	printf("\n");
	return 0;
}
