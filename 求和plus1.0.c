#include<stdio.h>
int main()
{
	int count=0,sum=0;
	int number=0;
	

	scanf("%d",&number);
	while(number!=-1)
	{
		sum+=number;
		count++;
		
		scanf("%d",&number);
	}
	printf("averagesum=%f\n",1.0*sum/count);
	
	return 0;
}
