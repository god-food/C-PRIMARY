#include<stdio.h>
int main()
{
	int count=0,sum=0;
	int number=0;
	
	while(number!=-1)
	{
		scanf("%d",&number);
		if(number!=-1)
		{
			sum+=number;
			count++;
		}else
			break;
		continue;
	}
	printf("averagesum=%f\n",1.0*sum/count);
	
	return 0;
	
}
