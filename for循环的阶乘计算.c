#include<stdio.h>
int main(avoid)
{
	int n,fact=1;
	
	printf("������Ҫ����Ľ׳˽���\n");
	scanf("%d",&n);
	
	int i=1; 
	for(;i<=n;i++)  //����i�������Ϳ���for����ڲ����壬ǰ����Ҫ��C99�±������"-std=c99";for(int i=1;i<=n;i++); 
	{				//for==while;for(;����;)==while(����); 
		fact*=i;	/* for(i=1;����;i++){}�ȼ���i=1;while(����){;i++};*/
	}
	
	printf("%d!=%d",n,fact);
 } 
 /*	����й̶�ѭ����������for;
 	�������ִ��һ�Σ���do_while�� 
	���������while�� 
	for����while�໥ת���� 			
*/ 
