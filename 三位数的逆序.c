#include<stdio.h>
 
 int main()
 {
	int s;
	int a,A,B,C;
 	
 	printf("��������λ��������");
 	
 	scanf("%d",&s);
 	
 	A=s/100;
 	a=s%100;
	B=a/10;
	C=a%10;
	
	//C++ double�Ͳ���ʵʩ%����������Ϊ�����������������ԣ���������fmod����������Ϊ����������������
	
	printf("%d",(int)(C*100+B*10+A));
	
	return 0;

  } 
