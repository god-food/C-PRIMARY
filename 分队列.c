#include<stdio.h>
int main()
{
	int n,i;
	
	printf("全排一共多少人："); 
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			printf("%d ",i);
	  	else
	 		continue;
	}	
	return 0;
}
