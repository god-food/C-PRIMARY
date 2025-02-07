#include<stdio.h>
int main()
{
	int even=0,odd=0;
	int number=0,n;
	
	while(number!=-1)
	{
		scanf("%d",&number);
		n=number%2;
		switch(n)
		{
			case 0:
				even++;
				break;
			case 1:
				odd++;
				break;
		}
	}
	
	printf("even=%d odd=%d",even,odd); 
	return 0;	
}
