#include<stdio.h>
 
 int main()
 {
	int s;
	int a,A,B,C;
 	
 	printf("请输入三位正整数：");
 	
 	scanf("%d",&s);
 	
 	A=s/100;
 	a=s%100;
	B=a/10;
	C=a%10;
	
	//C++ double型不能实施%操作符，作为除数被除数都不可以，但可以用fmod函数，则作为除数被除数都可以
	
	printf("%d",(int)(C*100+B*10+A));
	
	return 0;

  } 
